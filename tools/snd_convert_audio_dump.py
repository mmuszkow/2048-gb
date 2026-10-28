#!/usr/bin/env python3

import sys

# Game Boy CPU clock frequency: 4,194,304 Hz
# 1 VBlank Frame at 60 Hz = ~70,224 cycles
CYCLES_PER_FRAME = 70224
MAX_CONSECUTIVE_DELAYS = 120  # Cap long pauses to max ~2 second to prevent driver locks

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

VALID_SOUND_REGS = set(SOUND_REG_NAMES.keys())


def parse_and_comment_log(log_filepath, output_c_filepath, array_name):
    c_lines = []
    last_frame = None
    total_bytes = 0

    with open(log_filepath, "r") as f:
        for line in f:
            line = line.strip()
            if not line or ":" not in line or "=" not in line:
                continue

            try:
                cycles_str, rest = line.split(":", 1)
                reg_str, val_str = rest.split("=", 1)

                cycles = int(cycles_str)
                reg = int(reg_str, 16)
                val = int(val_str, 16)
            except ValueError:
                continue

            # Validate against explicit allowed Game Boy sound registers / Wave RAM
            if reg not in VALID_SOUND_REGS:
                continue

            # Compute relative offset from 0xFF10 (e.g. 0x11 -> 0x01, 0x30 -> 0x20)
            sound_reg_offset = reg - GB_IO_NR10

            current_frame = cycles // CYCLES_PER_FRAME

            if last_frame is None:
                last_frame = current_frame

            frame_delta = current_frame - last_frame
            if frame_delta > 0:
                frame_delta = min(frame_delta, MAX_CONSECUTIVE_DELAYS)
                
                while frame_delta > 0:
                    chunk = min(frame_delta, 127)
                    c_lines.append(f"    0x{chunk:02X},              /* Delay {chunk} VBlanks */")
                    total_bytes += 1
                    frame_delta -= chunk
                last_frame = current_frame

            # Output Command: 0x80 | sound_reg_offset followed by register value
            cmd_byte = 0x80 | (sound_reg_offset & 0x7F)
            reg_name = SOUND_REG_NAMES.get(reg, f"REG_0x{reg:02X}")
            
            c_lines.append(
                f"    0x{cmd_byte:02X}, 0x{val:02X},        /* {reg_name} = 0x{val:02X} */"
            )
            total_bytes += 2

    # Append EOF marker
    c_lines.append("    0xFF                 /* End of Song */")
    total_bytes += 1

    # Write formatted C code
    with open(output_c_filepath, "w") as out:
        out.write(f"const UINT8 {array_name}[] = {{\n")
        out.write("\n".join(c_lines))
        out.write("\n};\n")

    print(f"Converted '{log_filepath}' -> '{output_c_filepath}'. Stream size: {total_bytes} bytes.")

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print('Usage:', sys.argv[0], '<dump file>', '<song id>')
        sys.exit(1)

    dump_file = sys.argv[1]
    song_id = sys.argv[2]
    out_file = f'song{song_id}.h'
    array_name = f'SND_SONG{song_id}'
    parse_and_comment_log(dump_file, out_file, array_name)

