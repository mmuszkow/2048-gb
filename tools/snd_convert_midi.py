#!/usr/bin/env python3

import sys
import mido

# Command Byte Definitions matching your C driver
CMD_WRITE_REG = 0x80
CMD_WAVE_RAM  = 0xFE
CMD_EOF       = 0xFF

# Base hardware address: 0xFF10 (NR10)
# Register offsets relative to 0xFF10
REG_NR10 = 0x00
REG_NR11 = 0x01
REG_NR12 = 0x02
REG_NR13 = 0x03
REG_NR14 = 0x04

REG_NR21 = 0x06
REG_NR22 = 0x07
REG_NR23 = 0x08
REG_NR24 = 0x09

REG_NR41 = 0x11
REG_NR42 = 0x12
REG_NR43 = 0x13
REG_NR44 = 0x14

def midi_note_to_gb_freq(note_num):
    """
    Converts MIDI note number (0-127) to 11-bit Game Boy frequency value.
    Formula: Frequency = 131072 / (2048 - GB_val)
    -> GB_val = 2048 - (131072 / (440 * 2^((note - 69)/12)))
    """
    freq_hz = 440.0 * (2.0 ** ((note_num - 69.0) / 12.0))
    if freq_hz <= 0 or freq_hz >= 131072:
        return 0
    gb_val = int(round(2048.0 - (131072.0 / freq_hz)))
    return max(0, min(2047, gb_val))

def convert_midi_to_gb_c(midi_path, array_name="SND_SONG_0"):
    mid = mido.MidiFile(midi_path)
    
    # 60 Hz Game Boy frame timing = ~16.666 ms per tick
    TARGET_FPS = 60
    FRAME_TIME = 1.0 / TARGET_FPS
    
    output_bytes = []
    
    # Track musical time in seconds
    current_time_sec = 0.0
    tick_accum = 0.0
    pending_ticks = 0
    
    # Default tempo: 120 BPM (500,000 microseconds per beat)
    tempo = 500000 
    
    def flush_delays(ticks_count):
        """Emits short delay bytes (0x01 - 0x7F) for accumulated ticks."""
        nonlocal output_bytes
        while ticks_count > 0:
            chunk = min(ticks_count, 127)
            output_bytes.append(chunk)
            ticks_count -= chunk

    for msg in mid.play():
        # Accumulate delta time in frames
        if msg.time > 0:
            tick_accum += msg.time * TARGET_FPS
            ticks = int(tick_accum)
            if ticks > 0:
                pending_ticks += ticks
                tick_accum -= ticks

        # Parse MIDI events (Handling Channel 1 / Square 1 as example)
        if msg.type == 'note_on' and msg.velocity > 0:
            # If we accumulated rest/delay ticks before this note, output them first
            if pending_ticks > 0:
                flush_delays(pending_ticks)
                pending_ticks = 0

            gb_freq = midi_note_to_gb_freq(msg.note)
            freq_low = gb_freq & 0xFF
            freq_high = (gb_freq >> 8) & 0x07
            
            # Map MIDI velocity (0-127) to GB volume envelope (0-15)
            gb_vol = (msg.velocity // 8) << 4
            
            # Write NR12 (Volume Envelope: High 4 bits volume, direction=0, sweep=0)
            output_bytes.extend([CMD_WRITE_REG | REG_NR12, gb_vol | 0x00])
            # Write NR13 (Frequency Low 8 bits)
            output_bytes.extend([CMD_WRITE_REG | REG_NR13, freq_low])
            # Write NR14 (Frequency High 3 bits + Trigger Bit 0x80)
            output_bytes.extend([CMD_WRITE_REG | REG_NR14, 0x80 | freq_high])

        elif msg.type == 'note_off' or (msg.type == 'note_on' and msg.velocity == 0):
            if pending_ticks > 0:
                flush_delays(pending_ticks)
                pending_ticks = 0

            # Turn off Channel 1 volume envelope
            output_bytes.extend([CMD_WRITE_REG | REG_NR12, 0x00])
            output_bytes.extend([CMD_WRITE_REG | REG_NR14, 0x80])

    # Flush any remaining ticks at end of track
    if pending_ticks > 0:
        flush_delays(pending_ticks)

    # Append EOF / Loop command
    output_bytes.append(CMD_EOF)
    
    # Format to C Array String
    c_code = f"const UINT8 {array_name}[] = {{\n    "
    line_bytes = []
    for i, b in enumerate(output_bytes):
        line_bytes.append(f"0x{b:02X}")
        if (i + 1) % 12 == 0:
            c_code += ", ".join(line_bytes) + ",\n    "
            line_bytes = []
    if line_bytes:
        c_code += ", ".join(line_bytes) + "\n"
    c_code += "};\n"
    
    return c_code

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python midi2gb.py <input.mid> [output_array_name]")
        sys.exit(1)
        
    input_midi = sys.argv[1]
    name = sys.argv[2] if len(sys.argv) > 2 else "SND_SONG_0"
    
    result_c = convert_midi_to_gb_c(input_midi, name)
    
    out_file = input_midi.rsplit(".", 1)[0] + ".c"
    with open(out_file, "w") as f:
        f.write(result_c)
        
    print(f"Successfully converted '{input_midi}' -> '{out_file}'")

