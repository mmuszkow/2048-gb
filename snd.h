#ifndef __2048_SND_H__
#define __2048_SND_H__

#include <gb/gb.h>
#include "music.h"

#define NO_SONG -1
#define MAX_CALL_STACK 16
#define MAX_FRAME_BUF  64

#define SND_CMD_NODE16   0xFA
#define SND_CMD_NODE8    0xFB
#define SND_CMD_RET      0xFC
#define SND_CMD_WAVE_RAM 0xFE
#define SND_CMD_END      0xFF

/* Engine State Variables */
volatile INT8 snd_song;
INT8 snd_delay;
static INT8 snd_next_delay;
static const UINT8* snd_ptr;

/* Tree Call Stack */
static const UINT8* snd_stack[MAX_CALL_STACK];
static UINT8 snd_stack_idx;

/* Intermediate Register Write Queue (Main Loop -> VBlank ISR) */
static UINT8 snd_buf[MAX_FRAME_BUF];
static UINT8 snd_buf_len;
static volatile UINT8 snd_buf_ready;

void snd_set_song(INT8 song) {
    NR52_REG = 0x00; /* turn off APU */
    if (snd_song >= 0) {
        snd_ptr = SND_SONG_DATA[song];
        snd_stack_idx = 0;
        snd_delay = 0;
        snd_next_delay = 0;
        snd_buf_len = 0;
        snd_buf_ready = 0;
    }
    snd_song = song;
}

/* 
 * MAIN LOOP: Interprets compressed nodes into a flat register write queue.
 * Keeps running ahead until it hits a DELAY command.
 */
void snd_decompress(void) {
    UINT8 cmd;
    const UINT8** current_nodes;

    if (snd_song < 0 || snd_buf_ready)
        return;

    current_nodes = (const UINT8**)SND_SONG_NODES[snd_song];
    snd_buf_len = 0;

    while (1) {
        cmd = *snd_ptr++;

        /* DELAY: 0x00 - 0x7F */
        if (cmd < 0x80) {
            snd_next_delay = (INT8)cmd - 1;
            snd_buf_ready = 1; /* Atomic flag release for VBlank */
            return;
        }

        switch (cmd) {
            /* WAVE_RAM: Queue opcode + 16 payload bytes */
            case SND_CMD_WAVE_RAM:
                if (snd_buf_len + 17 <= MAX_FRAME_BUF) {
                    snd_buf[snd_buf_len++] = 0xFA;
                    for (UINT8 i = 0; i < 16; i++) {
                        snd_buf[snd_buf_len++] = *snd_ptr++;
                    }
                } else {
                    snd_ptr += 16;
                }
                break;

            /* NODE_CALL_16: 2-byte node index */
            case SND_CMD_NODE16: {
                UINT16 node_id = (UINT16)snd_ptr[0] | ((UINT16)snd_ptr[1] << 8);
                snd_ptr += 2;
                if (snd_stack_idx < MAX_CALL_STACK) {
                    snd_stack[snd_stack_idx++] = snd_ptr;
                    snd_ptr = current_nodes[node_id];
                }
                break;
            }

            /* NODE_CALL_8: 1-byte node index */
            case SND_CMD_NODE8: {
                UINT8 node_id = *snd_ptr++;
                if (snd_stack_idx < MAX_CALL_STACK) {
                    snd_stack[snd_stack_idx++] = snd_ptr;
                    snd_ptr = current_nodes[node_id];
                }
                break;
            }

            /* RET: Return from node */
            case SND_CMD_RET:
                if (snd_stack_idx > 0) {
                    snd_ptr = snd_stack[--snd_stack_idx];
                }
                break;

            /* END: Advance to next song */
            case SND_CMD_END:
                snd_song++;
                if (snd_song >= SND_SONG_COUNT)
                    snd_song = 0;
                snd_ptr = SND_SONG_DATA[snd_song];
                current_nodes = (const UINT8**)SND_SONG_NODES[snd_song];
                snd_stack_idx = 0;
                break;

            /* REG_WRITE: Copy (reg_offset, val) pair into buffer */
            default:
                if (snd_buf_len + 2 <= MAX_FRAME_BUF) {
                    snd_buf[snd_buf_len++] = cmd & 0x7F;
                    snd_buf[snd_buf_len++] = *snd_ptr++;
                } else {
                    snd_ptr++;
                }
                break;
        }
    }
}

/* 
 * VBLANK ISR: Ultra-fast hardware register flush.
 */
void snd_update(void) {
    if (snd_song < 0)
        return;

    if (snd_delay > 0) {
        snd_delay--;
        return;
    }

    if (snd_buf_ready) {
        UINT8 i = 0;
        while (i < snd_buf_len) {
            UINT8 op = snd_buf[i++];
            if (op == 0xFA) {
                _AUD3WAVERAM[0]  = snd_buf[i++];
                _AUD3WAVERAM[1]  = snd_buf[i++];
                _AUD3WAVERAM[2]  = snd_buf[i++];
                _AUD3WAVERAM[3]  = snd_buf[i++];
                _AUD3WAVERAM[4]  = snd_buf[i++];
                _AUD3WAVERAM[5]  = snd_buf[i++];
                _AUD3WAVERAM[6]  = snd_buf[i++];
                _AUD3WAVERAM[7]  = snd_buf[i++];
                _AUD3WAVERAM[8]  = snd_buf[i++];
                _AUD3WAVERAM[9]  = snd_buf[i++];
                _AUD3WAVERAM[10] = snd_buf[i++];
                _AUD3WAVERAM[11] = snd_buf[i++];
                _AUD3WAVERAM[12] = snd_buf[i++];
                _AUD3WAVERAM[13] = snd_buf[i++];
                _AUD3WAVERAM[14] = snd_buf[i++];
                _AUD3WAVERAM[15] = snd_buf[i++];
            } else {
                *(volatile UINT8*)(0xFF10 + op) = snd_buf[i++];
            }
        }
        snd_delay = snd_next_delay;
        snd_buf_ready = 0; /* Clear flag to signal main loop */
    }
}

#endif

