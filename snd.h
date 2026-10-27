#ifndef __2048_SND_H__
#define __2048_SND_H__

#include <gb/gb.h>
#include "music.h"

# define NO_SONG -1
INT8 snd_song;
UINT8 snd_cmd;
INT8 snd_delay;
const UINT8* snd_ptr;

void snd_init(INT8 song) {
    if (song < 0) 
        NR52_REG = 0x00; /* turn off sound, saves power */
    else {
        NR52_REG = 0x80;
        NR50_REG = 0x77;
        NR51_REG = 0xFF;
    }
    snd_delay = 0;
    snd_song = song;
}

void snd_process(void) {
    /* check if muted */
    if (snd_song < 0)
        return;

    /* check if we are still waiting for delay to finish */
    if (snd_delay > 0) {
        snd_delay--;
        return;
    }

    while (1) {
        snd_cmd = *snd_ptr++;

        /* delay */
        if (snd_cmd < 0x80) {
            snd_delay = snd_cmd - 1;
            return;
        }

        switch (snd_cmd) {
            /* write 16-bytes sample */
            case 0xFE:
                _AUD3WAVERAM[0]  = *snd_ptr++;
                _AUD3WAVERAM[1]  = *snd_ptr++;
                _AUD3WAVERAM[2]  = *snd_ptr++;
                _AUD3WAVERAM[3]  = *snd_ptr++;
                _AUD3WAVERAM[4]  = *snd_ptr++;
                _AUD3WAVERAM[5]  = *snd_ptr++;
                _AUD3WAVERAM[6]  = *snd_ptr++;
                _AUD3WAVERAM[7]  = *snd_ptr++;
                _AUD3WAVERAM[8]  = *snd_ptr++;
                _AUD3WAVERAM[9]  = *snd_ptr++;
                _AUD3WAVERAM[10] = *snd_ptr++;
                _AUD3WAVERAM[11] = *snd_ptr++;
                _AUD3WAVERAM[12] = *snd_ptr++;
                _AUD3WAVERAM[13] = *snd_ptr++;
                _AUD3WAVERAM[14] = *snd_ptr++;
                _AUD3WAVERAM[15] = *snd_ptr++;
                break;
            /* move to next song */
            case 0xFF:
                //NR52_REG = 0x00;
                snd_song++;
                if (snd_song >= SND_SONG_COUNT)
                    snd_song = 0;
                snd_ptr = &SND_SONGS[snd_song][0];
                return;
            default:
                snd_cmd &= 0x7F; /* reg offset */
                *(volatile UINT8*)(0xFF10 + snd_cmd) = *snd_ptr++;
                break;
        }
    }
}

#endif

