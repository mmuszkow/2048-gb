#!/usr/bin/env python3

import os
import re
import sys
from pathlib import Path

# Opcode constants matching snd_compress.py
CMD_NODE16   = 0xFA
CMD_NODE8    = 0xFB
CMD_RET      = 0xFC
CMD_WAVE_RAM = 0xFE
CMD_END      = 0xFF

# Base offset for Game Boy sound registers relative to 0xFF00
GB_IO_NR10 = 0x10

# Named lookup map for C comments
SOUND_REG_NAMES = {
    0x10: "NR10 (Ch1 Sweep)",
    0x11: "NR11 (Ch1 Length/Duty)",
    0x12: "NR12 (Ch1 Envelope)",
    0x13: "NR13 (Ch1 Freq Lo)",
    0x14: "NR14 (Ch1 Freq Hi/Trigger)",
    0x16: "NR21 (Ch2 Length/Duty)",
    0x17: "NR22 (Ch2 Envelope)",
    0x18: "NR23 (Ch2 Freq Lo)",
    0x19: "NR24 (Ch2 Freq Hi/Trigger)",
    0x1A: "NR30 (Ch3 Sound On/Off)",
    0x1B: "NR31 (Ch3 Sound Length)",
    0x1C: "NR32 (Ch3 Output Level)",
    0x1D: "NR33 (Ch3 Freq Lo)",
    0x1E: "NR34 (Ch3 Freq Hi/Trigger)",
    0x20: "NR41 (Ch4 Sound Length)",
    0x21: "NR42 (Ch4 Envelope)",
    0x22: "NR43 (Ch4 Polynomial Counter)",
    0x23: "NR44 (Ch4 Counter/Initial)",
    0x24: "NR50 (Master Volume/Pan)",
    0x25: "NR51 (Sound Output Terminal)",
    0x26: "NR52 (Sound On/Off)",
}

# Add Wave RAM registers dynamically (0x30 to 0x3F)
for wave_idx in range(16):
    raw_addr = 0x30 + wave_idx
    SOUND_REG_NAMES[raw_addr] = f"WAVE_RAM[{wave_idx}]"


def parse_compressed_header(file_path):
    """
    Parses a compressed C header file and extracts raw data bytes, 
    node lookup offsets, and song metadata.
    """
    with open(file_path, 'r') as f:
        content = f.read()

    # Extract prefix (e.g. SONG0)
    prefix_match = re.search(r'const\s+UINT8\s+(\w+)_DATA', content)
    prefix = prefix_match.group(1) if prefix_match else "SONG0"

    # Extract Song ID number
    song_id_match = re.search(r'\d+', prefix)
    song_id = int(song_id_match.group(0)) if song_id_match else 0

    # Extract DATA binary blob bytes
    data_match = re.search(rf'const\s+UINT8\s+{prefix}_DATA\[\d+\]\s*=\s*\{{([^}}]+)\}}', content, re.DOTALL)
    if not data_match:
        raise ValueError(f"Could not find {prefix}_DATA array in {file_path}")

    raw_data_strings = re.findall(r'(0x[0-9a-fA-F]+|\d+)', data_match.group(1))
    data_bytes = [int(val, 0) for val in raw_data_strings]

    # Extract NODES offset pointers array
    nodes_match = re.search(rf'const\s+UINT8\*\s+const\s+{prefix}_NODES\[\d+\]\s*=\s*\{{([^}}]+)\}}', content, re.DOTALL)
    node_offsets = []

    if nodes_match:
        nodes_content = nodes_match.group(1)
        offset_matches = re.findall(rf'&{prefix}_DATA\[(\d+)\]', nodes_content)
        node_offsets = [int(off) for off in offset_matches]

    return data_bytes, node_offsets, song_id, prefix


def decompress_to_commands(data_bytes, node_offsets):
    """
    Intermediate Step: Traverses the compressed byte stream using a call stack 
    and returns a list of command tuples matching the compressor format:
      - ('DELAY', frames)
      - ('REG_WRITE', reg_offset, val)
      - ('WAVE_RAM', (b0, b1, ... b15))
      - ('END', )
    """
    commands = []
    stack = []
    pc = 0
    max_steps = 1000000
    steps = 0

    while pc < len(data_bytes):
        steps += 1
        if steps > max_steps:
            raise RuntimeError("Decompression halted: Safety loop limit exceeded.")

        cmd = data_bytes[pc]

        # DELAY: 0x00 - 0x7F
        if cmd < 0x80:
            commands.append(('DELAY', cmd))
            pc += 1

        # WAVE_RAM: 0xFE + 16 payload bytes
        elif cmd == CMD_WAVE_RAM:
            payload = tuple(data_bytes[pc + 1 : pc + 17])
            commands.append(('WAVE_RAM', payload))
            pc += 17

        # NODE_CALL_16: 0xFA + 2-byte ID (Little Endian)
        elif cmd == CMD_NODE16:
            node_id = data_bytes[pc + 1] | (data_bytes[pc + 2] << 8)
            if node_id >= len(node_offsets):
                raise IndexError(f"Invalid CMD_NODE16 ID {node_id} at offset {pc}")
            stack.append(pc + 3)
            pc = node_offsets[node_id]

        # NODE_CALL_8: 0xFB + 1-byte ID
        elif cmd == CMD_NODE8:
            node_id = data_bytes[pc + 1]
            if node_id >= len(node_offsets):
                raise IndexError(f"Invalid CMD_NODE8 ID {node_id} at offset {pc}")
            stack.append(pc + 2)
            pc = node_offsets[node_id]

        # RET: 0xFC
        elif cmd == CMD_RET:
            if stack:
                pc = stack.pop()
            else:
                break

        # END: 0xFF
        elif cmd == CMD_END:
            commands.append(('END', ))
            break

        # REG_WRITE: 0x80 - 0xDF
        else:
            reg_offset = cmd & 0x7F
            val = data_bytes[pc + 1]
            commands.append(('REG_WRITE', reg_offset, val))
            pc += 2

    return commands


def export_uncompressed_c(commands, song_id, output_c_filepath):
    """
    Formats the decompressed command tuples into C code with exact comments 
    and byte counts matching the uncompressed format.
    """
    c_lines = []
    total_bytes = 0

    for cmd in commands:
        cmd_type = cmd[0]

        if cmd_type == 'DELAY':
            chunk = cmd[1]
            c_lines.append(f"    0x{chunk:02X},              /* Delay {chunk} VBlanks */")
            total_bytes += 1

        elif cmd_type == 'REG_WRITE':
            reg_offset, val = cmd[1], cmd[2]
            cmd_byte = 0x80 | (reg_offset & 0x7F)
            reg_addr = GB_IO_NR10 + reg_offset
            reg_name = SOUND_REG_NAMES.get(reg_addr, f"REG_0x{reg_addr:02X}")

            c_lines.append(f"    0x{cmd_byte:02X}, 0x{val:02X},        /* {reg_name} = 0x{val:02X} */")
            total_bytes += 2

        elif cmd_type == 'WAVE_RAM':
            payload = cmd[1]
            hex_payload = ", ".join(f"0x{b:02X}" for b in payload)
            c_lines.append(f"    0x{CMD_WAVE_RAM:02X}, {hex_payload},  /* WAVE_RAM (16-byte block) */")
            total_bytes += 17

        elif cmd_type == 'END':
            c_lines.append(f"    0x{CMD_END:02X}                 /* End of Song */")
            total_bytes += 1

    array_name = f"SND_SONG{song_id}"

    # Ensure output directory exists if path includes subdirectories
    os.makedirs(os.path.dirname(output_c_filepath) or '.', exist_ok=True)

    # Write formatted C code
    with open(output_c_filepath, "w") as out:
        out.write(f"const UINT8 {array_name}[{total_bytes}] = {{\n")
        out.write("\n".join(c_lines))
        out.write("\n};\n")

    return total_bytes


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print(f"Usage: {sys.argv[0]} <compressed_header.h> [song_id]")
        sys.exit(1)

    compressed_file = sys.argv[1]
    
    print(f"Parsing '{compressed_file}'...")
    data_bytes, node_offsets, parsed_song_id, prefix = parse_compressed_header(compressed_file)

    song_id = sys.argv[2] if len(sys.argv) >= 3 else parsed_song_id
    out_file = f'./{Path(compressed_file).stem}_decompressed.h'

    # Intermediate Step: Parse bytecode into command tuples
    commands = decompress_to_commands(data_bytes, node_offsets)
    print(f"Decompressed into {len(commands)} command tuples.")

    # Export formatted uncompressed C header
    total_bytes = export_uncompressed_c(commands, song_id, out_file)

    print(f"Converted '{compressed_file}' -> '{out_file}'. Stream size: {total_bytes} bytes.")
    sys.exit(0)

