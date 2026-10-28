#!/usr/bin/env python3

import re
import sys
from collections import Counter

def parse_c_array(file_path):
    with open(file_path, 'r') as f:
        c_code = f.read()
        
    match = re.search(r'\{([^}]+)\}', c_code)
    if not match:
        return []
    array_content = match.group(1)
    
    array_content = re.sub(r'//.*', '', array_content)
    array_content = re.sub(r'/\*.*?\*/', '', array_content, flags=re.DOTALL)
    raw_values = re.findall(r'(0x[0-9a-fA-F]+|\d+)', array_content)
    
    return [int(val, 0) for val in raw_values]

def is_valid_snd_reg_offset(offset):
    valid_offsets = {
        0x00, 0x01, 0x02, 0x03, 0x04,  # NR10-NR14 (Channel 1)
        0x06, 0x07, 0x08, 0x09,        # NR21-NR24 (Channel 2)
        0x0A, 0x0B, 0x0C, 0x0D, 0x0E,  # NR30-NR34 (Channel 3)
        0x10, 0x11, 0x12, 0x13,        # NR41-NR44 (Channel 4)
        0x14, 0x15, 0x16               # NR50-NR52 (Master control)
    }
    valid_offsets.update(range(0x20, 0x30))  # Wave RAM
    return offset in valid_offsets

def group_into_commands(byte_list):
    commands = []
    i = 0
    while i < len(byte_list):
        cmd = byte_list[i]
        if cmd < 0x80:
            commands.append(('DELAY', cmd))
            i += 1
        elif cmd == 0xFE:
            payload = byte_list[i+1 : i+17]
            commands.append(('WAVE_RAM', tuple(payload)))
            i += 17
        elif cmd == 0xFF:
            commands.append(('END', ))
            break
        else:
            val = byte_list[i+1]
            reg = cmd & 0x7F
            if not is_valid_snd_reg_offset(reg):
                raise ValueError(f"Invalid register offset {hex(reg)} at index {i}")
            commands.append(('REG_WRITE', reg, val))
            i += 2
    return commands

def get_all_ngrams(commands, min_len, max_len):
    ngrams = Counter()
    for length in range(min_len, max_len + 1):
        for i in range(len(commands) - length + 1):
            seq = tuple(commands[i : i + length])
            ngrams[seq] += 1
    return {seq: count for seq, count in ngrams.items() if count >= 2}

def count_non_overlapping(commands, seq):
    count = 0
    i = 0
    seq_len = len(seq)
    while i <= len(commands) - seq_len:
        if tuple(commands[i : i + seq_len]) == seq:
            count += 1
            i += seq_len
        else:
            i += 1
    return count

def replace_sequence(commands, seq, node_id):
    new_commands = []
    i = 0
    seq_len = len(seq)
    while i < len(commands):
        if i <= len(commands) - seq_len and tuple(commands[i : i + seq_len]) == seq:
            new_commands.append(('NODE_CALL', node_id))
            i += seq_len
        else:
            new_commands.append(commands[i])
            i += 1
    return new_commands

def get_command_size(cmd_tuple):
    cmd_type = cmd_tuple[0]
    if cmd_type in ('DELAY', 'RET', 'END'):
        return 1
    elif cmd_type == 'REG_WRITE':
        return 2
    elif cmd_type == 'WAVE_RAM':
        return 17
    elif cmd_type == 'NODE_CALL':
        node_id = cmd_tuple[1]
        if node_id < 256:
            return 2      # NODE_CALL_8: 0xFD + 1 byte ID
        elif node_id < 65536:
            return 3      # NODE_CALL_16: 0xFC + 2 bytes ID
        else:
            raise ValueError(f"Node ID {node_id} exceeds 16-bit capacity limit.")
    return 1

def compress_song_data(commands):
    nodes = []
    
    while True:
        candidates = get_all_ngrams(commands, min_len=2, max_len=15)
        best_seq = None
        max_profit = 0
        
        for seq in candidates:
            total_occurrences = count_non_overlapping(commands, seq)
            for node in nodes:
                total_occurrences += count_non_overlapping(node, seq)
                
            if total_occurrences < 2:
                continue
                
            seq_byte_size = sum(get_command_size(cmd) for cmd in seq)
            original_bytes = total_occurrences * seq_byte_size
            
            node_id = len(nodes)
            if node_id < 256:
                call_cost = 2
            elif node_id < 65536:
                call_cost = 3
            else:
                break
                
            # Cost breakdown:
            # - Node sequence byte length
            # - 1 byte for RET opcode (0xFE)
            # - 2 bytes for NodePointers[] lookup table entry in ROM
            # - (total_occurrences * call_cost) for call instructions
            compressed_bytes = seq_byte_size + 1 + 2 + (total_occurrences * call_cost)
            profit = original_bytes - compressed_bytes
            
            if profit > max_profit:
                max_profit = profit
                best_seq = seq
                
        if max_profit <= 0 or not best_seq:
            break
            
        node_id = len(nodes)
        nodes.append(list(best_seq))
        commands = replace_sequence(commands, best_seq, node_id)
        for i in range(len(nodes) - 1):
            nodes[i] = replace_sequence(nodes[i], best_seq, node_id)
            
        print(f"Extracted Node {node_id:04X} | Saved {max_profit:4} bytes | Seq: {best_seq}")
        
    return commands, nodes

def command_to_bytes(cmd_tuple):
    cmd_type = cmd_tuple[0]
    
    if cmd_type == 'DELAY':
        return [cmd_tuple[1]]
    elif cmd_type == 'END':
        return [0xFF]
    elif cmd_type == 'RET':
        return [0xFE]
    elif cmd_type == 'REG_WRITE':
        return [cmd_tuple[1] | 0x80, cmd_tuple[2]]
    elif cmd_type == 'WAVE_RAM':
        return [0xFA] + list(cmd_tuple[1])
    elif cmd_type == 'NODE_CALL':
        node_id = cmd_tuple[1]
        if node_id < 256:
            return [0xFD, node_id]
        elif node_id < 65536:
            return [0xFC, node_id & 0xFF, (node_id >> 8) & 0xFF]
        else:
            raise ValueError(f"Node ID {node_id} exceeds 16-bit capacity.")
            
    raise ValueError(f"Unknown command tuple: {cmd_tuple}")

def export_rom_data(main_commands, nodes, song_id):
    all_bytes = []

    # 1. Main Track starts at offset 0
    for cmd in main_commands:
        all_bytes.extend(command_to_bytes(cmd))

    # 2. Append all nodes and record starting offsets
    node_offsets = []
    for node in nodes:
        node_offsets.append(len(all_bytes))
        for cmd in node:
            all_bytes.extend(command_to_bytes(cmd))
        all_bytes.append(0xFE)  # RET command

    c_code = ["#include <gb/gb.h>\n"]

    # ARRAY 1: Contiguous Binary Blob
    c_code.append("const UINT8 SONG%d_DATA[%d] = {" % (song_id, len(all_bytes)))
    for i in range(0, len(all_bytes), 12):
        chunk = all_bytes[i : i+12]
        hex_chunk = ", ".join(f"0x{b:02X}" for b in chunk)
        c_code.append(f"    {hex_chunk},")
    c_code.append("};\n")
    
    # ARRAY 2: Pointer Lookup Table
    c_code.append("const UINT8* const SONG%d_NODES[%d] = {" % (song_id, len(node_offsets)))
    if node_offsets:
        for i, offset in enumerate(node_offsets):
            c_code.append(f"    &SongData[{offset}], // Node {i}")
    else:
        c_code.append("    (const UINT8*)0")
    c_code.append("};\n")
    
    blob_bytes = len(all_bytes)
    pointer_table_bytes = len(node_offsets) * 2
    
    return "\n".join(c_code), blob_bytes, pointer_table_bytes

if __name__ == '__main__':
    if len(sys.argv) != 3:
        print('Usage:', sys.argv[0], '<.h file>', '<song ID>')
        sys.exit(1)

    c_filename = sys.argv[1]
    song_id = int(sys.argv[2])
    arr = parse_c_array(c_filename)
    raw_size = len(arr)
    print(f'Raw length: {raw_size} bytes')
    
    cmds = group_into_commands(arr)
    main_cmp, nodes = compress_song_data(cmds)

    c_output, blob_bytes, pointer_table_bytes = export_rom_data(main_cmp, nodes, song_id)
    total_compressed = blob_bytes + pointer_table_bytes

    print(f'\nData Blob size: {blob_bytes} bytes')
    print(f'Pointer Table size: {pointer_table_bytes} bytes')
    print(f'Total ROM size: {total_compressed} bytes')
    print(f'Compression ratio: {(total_compressed / raw_size) * 100:.2f}% of original')

    out_filename = f'song{song_id}_c.h'
    with open(out_filename, 'w') as f:
        f.write(c_output)
        
    print(f'Saved output to {out_filename}')
    sys.exit(0)

