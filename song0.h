const UINT8 SND_SONG0[] = {
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
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x0C,              /* Delay 12 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x0C,              /* Delay 12 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x0C,              /* Delay 12 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x06,              /* Delay 6 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x0B,              /* Delay 11 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x05,              /* Delay 5 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x51,        /* NR42 (Ch4 Envelope) = 0x51 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x61,        /* NR42 (Ch4 Envelope) = 0x61 */
    0x92, 0x02,        /* NR43 (Ch4 Polynomial Counter) = 0x02 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x44,        /* NR33 (Ch3 Freq Lo) = 0x44 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x0D,              /* Delay 13 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x10,              /* Delay 16 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x07,              /* Delay 7 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2D,              /* Delay 45 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x0D,              /* Delay 13 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x10,              /* Delay 16 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x03,              /* Delay 3 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8C,        /* NR23 (Ch2 Freq Lo) = 0x8C */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x8B,        /* NR23 (Ch2 Freq Lo) = 0x8B */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x86,        /* NR23 (Ch2 Freq Lo) = 0x86 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x87,        /* NR23 (Ch2 Freq Lo) = 0x87 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x05,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x05 */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x44,        /* NR33 (Ch3 Freq Lo) = 0x44 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x06,              /* Delay 6 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x44,        /* NR33 (Ch3 Freq Lo) = 0x44 */
    0x8E, 0x87,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x87 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xC4,        /* NR23 (Ch2 Freq Lo) = 0xC4 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x2D,        /* NR23 (Ch2 Freq Lo) = 0x2D */
    0x89, 0x87,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x87 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xF7,        /* NR23 (Ch2 Freq Lo) = 0xF7 */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x02,              /* Delay 2 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x01,              /* Delay 1 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0xA2,        /* NR42 (Ch4 Envelope) = 0xA2 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0xC4,        /* NR33 (Ch3 Freq Lo) = 0xC4 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x82,        /* NR42 (Ch4 Envelope) = 0x82 */
    0x92, 0x43,        /* NR43 (Ch4 Polynomial Counter) = 0x43 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x03,              /* Delay 3 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x01,              /* Delay 1 VBlanks */
    0x90, 0x00,        /* NR41 (Ch4 Sound Length) = 0x00 */
    0x91, 0x20,        /* NR42 (Ch4 Envelope) = 0x20 */
    0x92, 0x04,        /* NR43 (Ch4 Polynomial Counter) = 0x04 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x04,              /* Delay 4 VBlanks */
    0x91, 0x00,        /* NR42 (Ch4 Envelope) = 0x00 */
    0x93, 0x80,        /* NR44 (Ch4 Counter/Initial) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x29,              /* Delay 41 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x28,              /* Delay 40 VBlanks */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x89,        /* NR23 (Ch2 Freq Lo) = 0x89 */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x02,              /* Delay 2 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0xED,        /* NR23 (Ch2 Freq Lo) = 0xED */
    0x89, 0x85,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x85 */
    0x01,              /* Delay 1 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x86, 0xC0,        /* NR21 (Ch2 Length/Duty) = 0xC0 */
    0x87, 0x50,        /* NR22 (Ch2 Envelope) = 0x50 */
    0x88, 0x5B,        /* NR23 (Ch2 Freq Lo) = 0x5B */
    0x89, 0x86,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x86 */
    0x03,              /* Delay 3 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x06,              /* Delay 6 VBlanks */
    0x87, 0x00,        /* NR22 (Ch2 Envelope) = 0x00 */
    0x89, 0x80,        /* NR24 (Ch2 Freq Hi/Trigger) = 0x80 */
    0x02,              /* Delay 2 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x11,        /* NR33 (Ch3 Freq Lo) = 0x11 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x2E,              /* Delay 46 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x08,              /* Delay 8 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x27,        /* NR33 (Ch3 Freq Lo) = 0x27 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x2D,              /* Delay 45 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x09,              /* Delay 9 VBlanks */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x27,        /* NR33 (Ch3 Freq Lo) = 0x27 */
    0x8E, 0x86,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x86 */
    0x28,              /* Delay 40 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x8B, 0x00,        /* NR31 (Ch3 Sound Length) = 0x00 */
    0x8C, 0x40,        /* NR32 (Ch3 Output Level) = 0x40 */
    0x8D, 0x89,        /* NR33 (Ch3 Freq Lo) = 0x89 */
    0x8E, 0x85,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x85 */
    0x22,              /* Delay 34 VBlanks */
    0x8C, 0x00,        /* NR32 (Ch3 Output Level) = 0x00 */
    0x8E, 0x80,        /* NR34 (Ch3 Freq Hi/Trigger) = 0x80 */
    0x82, 0x00,        /* NR12 (Ch1 Envelope) = 0x00 */
    0x84, 0x80,        /* NR14 (Ch1 Freq Hi/Trigger) = 0x80 */
    0xFF                 /* End of Song */
};
