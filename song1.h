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
    0x75,              /* Delay 117 VBlanks */
    0x96, 0x80,        /* NR52 (Sound On/Off) = 0x80 */
    0x95, 0xFF,        /* NR51 (Sound Output Terminal) = 0xFF */
    0x94, 0x77,        /* NR50 (Master Volume/Pan) = 0x77 */
    0x8A, 0x80,        /* NR30 (Ch3 Sound On/Off) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0xA0, 0xFF,        /* WAVE_RAM[0] = 0xFF */
    0xA1, 0xFF,        /* WAVE_RAM[1] = 0xFF */
    0xA2, 0xFF,        /* WAVE_RAM[2] = 0xFF */
    0xA3, 0xFF,        /* WAVE_RAM[3] = 0xFF */
    0xA4, 0xFF,        /* WAVE_RAM[4] = 0xFF */
    0xA5, 0xFF,        /* WAVE_RAM[5] = 0xFF */
    0xA6, 0xFF,        /* WAVE_RAM[6] = 0xFF */
    0xA7, 0xFF,        /* WAVE_RAM[7] = 0xFF */
    0xA8, 0x00,        /* WAVE_RAM[8] = 0x00 */
    0xA9, 0x00,        /* WAVE_RAM[9] = 0x00 */
    0xAA, 0x00,        /* WAVE_RAM[10] = 0x00 */
    0xAB, 0x00,        /* WAVE_RAM[11] = 0x00 */
    0xAC, 0x00,        /* WAVE_RAM[12] = 0x00 */
    0xAD, 0x00,        /* WAVE_RAM[13] = 0x00 */
    0xAE, 0x00,        /* WAVE_RAM[14] = 0x00 */
    0xAF, 0x00,        /* WAVE_RAM[15] = 0x00 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x07,              /* Delay 7 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x09,              /* Delay 9 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x1C,              /* Delay 28 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0C,              /* Delay 12 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0A,              /* Delay 10 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0A,              /* Delay 10 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x80,        /* NR13 (Ch1 Freq Lo) = 0x80 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x80,        /* NR13 (Ch1 Freq Lo) = 0x80 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x80,        /* NR13 (Ch1 Freq Lo) = 0x80 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x80,        /* NR13 (Ch1 Freq Lo) = 0x80 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x63,        /* NR33 (Ch3 Freq Lo) = 0x63 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD1,        /* NR23 (Ch2 Freq Lo) = 0xD1 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xD0,        /* NR23 (Ch2 Freq Lo) = 0xD0 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCC,        /* NR23 (Ch2 Freq Lo) = 0xCC */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0xCB,        /* NR23 (Ch2 Freq Lo) = 0xCB */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x63,        /* NR33 (Ch3 Freq Lo) = 0x63 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x59,        /* NR33 (Ch3 Freq Lo) = 0x59 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xB2,        /* NR33 (Ch3 Freq Lo) = 0xB2 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8D,        /* NR13 (Ch1 Freq Lo) = 0x8D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x93,        /* NR13 (Ch1 Freq Lo) = 0x93 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x92,        /* NR13 (Ch1 Freq Lo) = 0x92 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x8E,        /* NR13 (Ch1 Freq Lo) = 0x8E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x56,        /* NR13 (Ch1 Freq Lo) = 0x56 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x92,        /* NR42 (Ch4 Envelope) = 0x92 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x06,        /* NR33 (Ch3 Freq Lo) = 0x06 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x11,        /* NR43 (Ch4 Polynomial Counter) = 0x11 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xCE,        /* NR33 (Ch3 Freq Lo) = 0xCE */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE7,        /* NR33 (Ch3 Freq Lo) = 0xE7 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x11,              /* Delay 17 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x59,        /* NR23 (Ch2 Freq Lo) = 0x59 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0A,              /* Delay 10 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x21,        /* NR23 (Ch2 Freq Lo) = 0x21 */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0A,              /* Delay 10 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5C,        /* NR13 (Ch1 Freq Lo) = 0x5C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x5B,        /* NR13 (Ch1 Freq Lo) = 0x5B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x59,        /* NR13 (Ch1 Freq Lo) = 0x59 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x57,        /* NR13 (Ch1 Freq Lo) = 0x57 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x71,        /* NR13 (Ch1 Freq Lo) = 0x71 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x09,        /* NR13 (Ch1 Freq Lo) = 0x09 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x09,        /* NR13 (Ch1 Freq Lo) = 0x09 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x03,        /* NR13 (Ch1 Freq Lo) = 0x03 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x03,        /* NR13 (Ch1 Freq Lo) = 0x03 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x09,        /* NR13 (Ch1 Freq Lo) = 0x09 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x09,        /* NR13 (Ch1 Freq Lo) = 0x09 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x08,        /* NR13 (Ch1 Freq Lo) = 0x08 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x03,        /* NR13 (Ch1 Freq Lo) = 0x03 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x03,        /* NR13 (Ch1 Freq Lo) = 0x03 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x71,        /* NR12 (Ch1 Envelope) = 0x71 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x47,        /* NR13 (Ch1 Freq Lo) = 0x47 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x41,        /* NR13 (Ch1 Freq Lo) = 0x41 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x24,        /* NR13 (Ch1 Freq Lo) = 0x24 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x23,        /* NR13 (Ch1 Freq Lo) = 0x23 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1E,        /* NR13 (Ch1 Freq Lo) = 0x1E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x1F,        /* NR13 (Ch1 Freq Lo) = 0x1F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x81,        /* NR12 (Ch1 Envelope) = 0x81 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x07,              /* Delay 7 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x07,              /* Delay 7 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x27,              /* Delay 39 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xCE,        /* NR23 (Ch2 Freq Lo) = 0xCE */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x42,        /* NR23 (Ch2 Freq Lo) = 0x42 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x86, 0x40,        /* NR21 (Ch2 Length/Duty) = 0x40 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xB2,        /* NR23 (Ch2 Freq Lo) = 0xB2 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x07,              /* Delay 7 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x22,              /* Delay 34 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x1D,              /* Delay 29 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0xFF                 /* End of Song */
};
