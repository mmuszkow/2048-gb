const UINT8 SND_SONG1[] = {
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0xF3,        /* NR12 (Ch1 Envelope) = 0xF3 */
    0x95, 0xF3,        /* NR51 (Sound Output Terminal) = 0xF3 */
    0x94, 0x77,        /* NR50 (Master Volume/Pan) = 0x77 */
    0x3E,              /* Delay 62 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x83, 0xC1,        /* NR13 (Ch1 Freq Lo) = 0xC1 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x78,              /* Delay 120 VBlanks */
    0xA0, 0x11,        /* WAVE_RAM[0] = 0x11 */
    0xA1, 0x23,        /* WAVE_RAM[1] = 0x23 */
    0xA2, 0x56,        /* WAVE_RAM[2] = 0x56 */
    0xA3, 0x78,        /* WAVE_RAM[3] = 0x78 */
    0xA4, 0x99,        /* WAVE_RAM[4] = 0x99 */
    0xA5, 0x98,        /* WAVE_RAM[5] = 0x98 */
    0xA6, 0x76,        /* WAVE_RAM[6] = 0x76 */
    0xA7, 0x67,        /* WAVE_RAM[7] = 0x67 */
    0xA8, 0x9A,        /* WAVE_RAM[8] = 0x9A */
    0xA9, 0xDF,        /* WAVE_RAM[9] = 0xDF */
    0xAA, 0xFE,        /* WAVE_RAM[10] = 0xFE */
    0xAB, 0xC9,        /* WAVE_RAM[11] = 0xC9 */
    0xAC, 0x85,        /* WAVE_RAM[12] = 0x85 */
    0xAD, 0x42,        /* WAVE_RAM[13] = 0x42 */
    0xAE, 0x11,        /* WAVE_RAM[14] = 0x11 */
    0xAF, 0x31,        /* WAVE_RAM[15] = 0x31 */
    0x84, 0x00,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x00 */
    0x89, 0x00,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x00 */
    0x8E, 0x00,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x00 */
    0x94, 0xFF,        /* NR50 (Master Volume/Pan) = 0xFF */
    0x95, 0xFF,        /* NR51 (Sound Output Terminal) = 0xFF */
    0x96, 0xFF,        /* NR52 (Sound On/Off) = 0xFF */
    0x8A, 0xFF,        /* NR30 (Ch3 Sound On/Off) = 0xFF */
    0x8C, 0x20,        /* NR32 (Ch3 Output Level) = 0x20 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x44,        /* NR23 (Ch2 Freq Lo) = 0x44 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x44,        /* NR23 (Ch2 Freq Lo) = 0x44 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xED,        /* NR13 (Ch1 Freq Lo) = 0xED */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xDA,        /* NR13 (Ch1 Freq Lo) = 0xDA */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xDA,        /* NR13 (Ch1 Freq Lo) = 0xDA */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xED,        /* NR13 (Ch1 Freq Lo) = 0xED */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x83,        /* NR33 (Ch3 Freq Lo) = 0x83 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x7B,        /* NR33 (Ch3 Freq Lo) = 0x7B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x83,        /* NR33 (Ch3 Freq Lo) = 0x83 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x44,        /* NR23 (Ch2 Freq Lo) = 0x44 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x90,        /* NR33 (Ch3 Freq Lo) = 0x90 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x9D,        /* NR33 (Ch3 Freq Lo) = 0x9D */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x44,        /* NR23 (Ch2 Freq Lo) = 0x44 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x90,        /* NR33 (Ch3 Freq Lo) = 0x90 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xED,        /* NR13 (Ch1 Freq Lo) = 0xED */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x62,        /* NR33 (Ch3 Freq Lo) = 0x62 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xDA,        /* NR13 (Ch1 Freq Lo) = 0xDA */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xDA,        /* NR13 (Ch1 Freq Lo) = 0xDA */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xED,        /* NR13 (Ch1 Freq Lo) = 0xED */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x62,        /* NR33 (Ch3 Freq Lo) = 0x62 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x7B,        /* NR33 (Ch3 Freq Lo) = 0x7B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x83,        /* NR33 (Ch3 Freq Lo) = 0x83 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x83,        /* NR33 (Ch3 Freq Lo) = 0x83 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x7B,        /* NR33 (Ch3 Freq Lo) = 0x7B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x16,        /* NR13 (Ch1 Freq Lo) = 0x16 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x7B,        /* NR23 (Ch2 Freq Lo) = 0x7B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x7B,        /* NR23 (Ch2 Freq Lo) = 0x7B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC7,        /* NR13 (Ch1 Freq Lo) = 0xC7 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x4F,        /* NR23 (Ch2 Freq Lo) = 0x4F */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xD6,        /* NR33 (Ch3 Freq Lo) = 0xD6 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x7B,        /* NR23 (Ch2 Freq Lo) = 0x7B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x6B,        /* NR23 (Ch2 Freq Lo) = 0x6B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x7B,        /* NR23 (Ch2 Freq Lo) = 0x7B */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC7,        /* NR13 (Ch1 Freq Lo) = 0xC7 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x4F,        /* NR23 (Ch2 Freq Lo) = 0x4F */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC7,        /* NR13 (Ch1 Freq Lo) = 0xC7 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC7,        /* NR13 (Ch1 Freq Lo) = 0xC7 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x63,        /* NR13 (Ch1 Freq Lo) = 0x63 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x44,        /* NR33 (Ch3 Freq Lo) = 0x44 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x44,        /* NR23 (Ch2 Freq Lo) = 0x44 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x82,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x82 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x39,        /* NR23 (Ch2 Freq Lo) = 0x39 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x62,        /* NR33 (Ch3 Freq Lo) = 0x62 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x44,        /* NR33 (Ch3 Freq Lo) = 0x44 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC9,        /* NR13 (Ch1 Freq Lo) = 0xC9 */
    0x84, 0x81,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x81 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x21,        /* NR33 (Ch3 Freq Lo) = 0x21 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xC9,        /* NR13 (Ch1 Freq Lo) = 0xC9 */
    0x84, 0x81,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x81 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x72,        /* NR23 (Ch2 Freq Lo) = 0x72 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0xF7,        /* NR33 (Ch3 Freq Lo) = 0xF7 */
    0x8E, 0xC6,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC6 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xD6,        /* NR23 (Ch2 Freq Lo) = 0xD6 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x39,        /* NR33 (Ch3 Freq Lo) = 0x39 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0x06,        /* NR23 (Ch2 Freq Lo) = 0x06 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x6B,        /* NR33 (Ch3 Freq Lo) = 0x6B */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x58,        /* NR13 (Ch1 Freq Lo) = 0x58 */
    0x84, 0x83,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x83 */
    0x86, 0x7F,        /* NR21 (Ch2 Length/Duty) = 0x7F */
    0x87, 0xA2,        /* NR22 (Ch2 Envelope) = 0xA2 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x8B, 0xF5,        /* NR31 (Ch3 Sound Length) = 0xF5 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0xC7,        /* NR34 (Ch3 Freq Hi/Trigger) = 0xC7 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x8F,        /* NR11 (Ch1 Length/Duty) = 0x8F */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x84,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x84 */
    0xFF                 /* End of Song */
};
