const UINT8 SND_SONG2[] = {
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
    0xA0, 0x00,        /* WAVE_RAM[0] = 0x00 */
    0xA1, 0x55,        /* WAVE_RAM[1] = 0x55 */
    0xA2, 0xAA,        /* WAVE_RAM[2] = 0xAA */
    0xA3, 0xFF,        /* WAVE_RAM[3] = 0xFF */
    0xA4, 0x00,        /* WAVE_RAM[4] = 0x00 */
    0xA5, 0x55,        /* WAVE_RAM[5] = 0x55 */
    0xA6, 0xAA,        /* WAVE_RAM[6] = 0xAA */
    0xA7, 0xFF,        /* WAVE_RAM[7] = 0xFF */
    0xA8, 0x00,        /* WAVE_RAM[8] = 0x00 */
    0xA9, 0x55,        /* WAVE_RAM[9] = 0x55 */
    0xAA, 0xAA,        /* WAVE_RAM[10] = 0xAA */
    0xAB, 0xFF,        /* WAVE_RAM[11] = 0xFF */
    0xAC, 0x00,        /* WAVE_RAM[12] = 0x00 */
    0xAD, 0x55,        /* WAVE_RAM[13] = 0x55 */
    0xAE, 0xAA,        /* WAVE_RAM[14] = 0xAA */
    0xAF, 0xFF,        /* WAVE_RAM[15] = 0xFF */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x70,        /* NR42 (Ch4 Envelope) = 0x70 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x80,        /* NR42 (Ch4 Envelope) = 0x80 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x20,              /* Delay 32 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x0A,              /* Delay 10 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x09,              /* Delay 9 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x07,              /* Delay 7 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x07,              /* Delay 7 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x0A,              /* Delay 10 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6F,        /* NR13 (Ch1 Freq Lo) = 0x6F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x70,        /* NR13 (Ch1 Freq Lo) = 0x70 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x72,        /* NR13 (Ch1 Freq Lo) = 0x72 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x74,        /* NR13 (Ch1 Freq Lo) = 0x74 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x75,        /* NR13 (Ch1 Freq Lo) = 0x75 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x21,        /* NR13 (Ch1 Freq Lo) = 0x21 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x13,              /* Delay 19 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x45,        /* NR13 (Ch1 Freq Lo) = 0x45 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x45,        /* NR13 (Ch1 Freq Lo) = 0x45 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3F,        /* NR13 (Ch1 Freq Lo) = 0x3F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3F,        /* NR13 (Ch1 Freq Lo) = 0x3F */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x45,        /* NR13 (Ch1 Freq Lo) = 0x45 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x45,        /* NR13 (Ch1 Freq Lo) = 0x45 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x40,        /* NR13 (Ch1 Freq Lo) = 0x40 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x10,              /* Delay 16 VBlanks */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x0D,        /* NR13 (Ch1 Freq Lo) = 0x0D */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x0D,        /* NR13 (Ch1 Freq Lo) = 0x0D */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x0E,        /* NR13 (Ch1 Freq Lo) = 0x0E */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x0E,        /* NR13 (Ch1 Freq Lo) = 0x0E */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x10,              /* Delay 16 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x0D,              /* Delay 13 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x70,        /* NR42 (Ch4 Envelope) = 0x70 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
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
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x46,        /* NR13 (Ch1 Freq Lo) = 0x46 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
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
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x76,        /* NR13 (Ch1 Freq Lo) = 0x76 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x04,        /* NR13 (Ch1 Freq Lo) = 0x04 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x06,        /* NR13 (Ch1 Freq Lo) = 0x06 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD8,        /* NR13 (Ch1 Freq Lo) = 0xD8 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xD9,        /* NR13 (Ch1 Freq Lo) = 0xD9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE4,        /* NR13 (Ch1 Freq Lo) = 0xE4 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE4,        /* NR13 (Ch1 Freq Lo) = 0xE4 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xEA,        /* NR13 (Ch1 Freq Lo) = 0xEA */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE9,        /* NR13 (Ch1 Freq Lo) = 0xE9 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE7,        /* NR13 (Ch1 Freq Lo) = 0xE7 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xE5,        /* NR13 (Ch1 Freq Lo) = 0xE5 */
    0x84, 0x06,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x06 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x36,        /* NR13 (Ch1 Freq Lo) = 0x36 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
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
    0x83, 0x3C,        /* NR13 (Ch1 Freq Lo) = 0x3C */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x3B,        /* NR13 (Ch1 Freq Lo) = 0x3B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x39,        /* NR13 (Ch1 Freq Lo) = 0x39 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x37,        /* NR13 (Ch1 Freq Lo) = 0x37 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x06,              /* Delay 6 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x70,        /* NR42 (Ch4 Envelope) = 0x70 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x11,        /* NR13 (Ch1 Freq Lo) = 0x11 */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xAC,        /* NR13 (Ch1 Freq Lo) = 0xAC */
    0x84, 0x85,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x0B,        /* NR13 (Ch1 Freq Lo) = 0x0B */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x42,        /* NR13 (Ch1 Freq Lo) = 0x42 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0x89,        /* NR13 (Ch1 Freq Lo) = 0x89 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x40,        /* NR11 (Ch1 Length/Duty) = 0x40 */
    0x82, 0x60,        /* NR12 (Ch1 Envelope) = 0x60 */
    0x83, 0xD6,        /* NR13 (Ch1 Freq Lo) = 0xD6 */
    0x84, 0x86,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xAC,        /* NR33 (Ch3 Freq Lo) = 0xAC */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
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
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x85,        /* NR13 (Ch1 Freq Lo) = 0x85 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x86,        /* NR13 (Ch1 Freq Lo) = 0x86 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
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
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x81,        /* NR13 (Ch1 Freq Lo) = 0x81 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x82,        /* NR12 (Ch1 Envelope) = 0x82 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
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
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x83,        /* NR13 (Ch1 Freq Lo) = 0x83 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x73,        /* NR13 (Ch1 Freq Lo) = 0x73 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
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
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x90,        /* NR13 (Ch1 Freq Lo) = 0x90 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xB1,        /* NR42 (Ch4 Envelope) = 0xB1 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x68,        /* NR13 (Ch1 Freq Lo) = 0x68 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6E,        /* NR13 (Ch1 Freq Lo) = 0x6E */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6D,        /* NR13 (Ch1 Freq Lo) = 0x6D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x6B,        /* NR13 (Ch1 Freq Lo) = 0x6B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x69,        /* NR13 (Ch1 Freq Lo) = 0x69 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x80, 0x00,        /* NR10 (Ch1 Sweep) = 0x00 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xA0,        /* NR13 (Ch1 Freq Lo) = 0xA0 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xA0,        /* NR13 (Ch1 Freq Lo) = 0xA0 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9A,        /* NR13 (Ch1 Freq Lo) = 0x9A */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9A,        /* NR13 (Ch1 Freq Lo) = 0x9A */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xA0,        /* NR13 (Ch1 Freq Lo) = 0xA0 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0xA0,        /* NR13 (Ch1 Freq Lo) = 0xA0 */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9F,        /* NR13 (Ch1 Freq Lo) = 0x9F */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9D,        /* NR13 (Ch1 Freq Lo) = 0x9D */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x01,              /* Delay 1 VBlanks */
    0x83, 0x9B,        /* NR13 (Ch1 Freq Lo) = 0x9B */
    0x84, 0x07,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x07 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x80, 0x3E,        /* NR10 (Ch1 Sweep) = 0x3E */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x91,        /* NR42 (Ch4 Envelope) = 0x91 */
    0x92, 0x65,        /* NR43 (Ch4 Polynomial Counter) = 0x65 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x81, 0x80,        /* NR11 (Ch1 Length/Duty) = 0x80 */
    0x82, 0x72,        /* NR12 (Ch1 Envelope) = 0x72 */
    0x83, 0x44,        /* NR13 (Ch1 Freq Lo) = 0x44 */
    0x84, 0x87,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x60,        /* NR42 (Ch4 Envelope) = 0x60 */
    0x92, 0x00,        /* NR43 (Ch4 Polynomial Counter) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x13,              /* Delay 19 VBlanks */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0x16,              /* Delay 22 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xE5,        /* NR33 (Ch3 Freq Lo) = 0xE5 */
    0x8E, 0x84,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x84 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x29,              /* Delay 41 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x0B,        /* NR33 (Ch3 Freq Lo) = 0x0B */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x24,              /* Delay 36 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x42,        /* NR33 (Ch3 Freq Lo) = 0x42 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x1E,              /* Delay 30 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0xFF                 /* End of Song */
};
