#include <gb/gb.h>
#include <gb/cgb.h>
#include <gb/rand.h>
#include "gfx.h"
#include "snd.h"

#ifndef bool
# define bool UINT8
# define true 1
# define false 0
#endif

/* Global loop variables, [-128, 127] range */
signed char x, y;

/* numbers are stored as binary shift */
UINT8 game[4][4];

/* this buffers are used in vblank (16x17 tiles) */
UINT8 frame_buff[272];
UINT8 palette_buff[272]; /* GBC mode only */

#define FLAG_REDRAW     1 /* redrawing will be done only if this is true */
#define FLAG_RESTART    2 /* game needs to be restarted */
#define FLAG_WAIT_ACK   4 /* we wait for A or START button */
#define FLAG_2048_ACKED 8 /* winning msg was closed */
UINT8 flags;

/* Sound data pointer */
UINT8* snd;
/* Sound flags (3 bytes) */
UINT8 snd_i0, snd_i1, snd_i2;

/* for score keeping */
UINT16 score;

void memset(UINT8* buff, UINT8 c, int size) {
    while(--size >= 0) buff[size] = c;
}

void memcpy(UINT8* dst, const UINT8* src, int size) {
    while(--size >= 0) dst[size] = src[size];
}

/* adds new tile to the map if possible */
void add_new_tile() {
    UINT8 r, rand_x, rand_y;
    for(y = 0; y < 4; y++)
        for(x = 0; x < 4; x++)
            /* there is space left for a new one */
            if(game[y][x] == 0) {
                do {
                    r = _rand() & 15; /* rand 0-15 */
                    rand_y = (r>>2) & 3;
                    rand_x = r & 3;
                } while(game[rand_y][rand_x] != 0);
                r = _rand();
                game[rand_y][rand_x] = (r < 26) ? 2 : 1; /* ~10% chance of getting 4 */
                return;
            }
}

/* reinitialize the game */
void new_game() {
    for(y=0; y<4; y++)
        for(x=0; x<4; x++)
            game[y][x] = 0;
    add_new_tile();
    add_new_tile();
    score = 0;
}

bool apply_gravity(UINT8 jp) {    
    UINT8 gravity[4];
    signed char grav_offset;
    bool map_changed = false;
    if(jp & J_UP) {
        for(x = 0; x < 4; x++) {
            grav_offset = 0;
            if(game[0][x] > 0) gravity[grav_offset++] = game[0][x];
            if(game[1][x] > 0) gravity[grav_offset++] = game[1][x];
            if(game[2][x] > 0) gravity[grav_offset++] = game[2][x];
            if(game[3][x] > 0) gravity[grav_offset++] = game[3][x];
            while(grav_offset < 4) gravity[grav_offset++] = 0;
            for(y = 0; y < 4; y++) {
                if(game[y][x] != gravity[y]) map_changed = true;
                game[y][x] = gravity[y];
            }
        }
        
    } else if(jp & J_DOWN) {
        for(x = 0; x < 4; x++) {
            grav_offset = 3;
            if(game[3][x] > 0) gravity[grav_offset--] = game[3][x];
            if(game[2][x] > 0) gravity[grav_offset--] = game[2][x];
            if(game[1][x] > 0) gravity[grav_offset--] = game[1][x];
            if(game[0][x] > 0) gravity[grav_offset--] = game[0][x];
            while(grav_offset >= 0) gravity[grav_offset--] = 0;
            for(y = 0; y < 4; y++) {
                if(game[y][x] != gravity[y]) map_changed = true;
                game[y][x] = gravity[y];
            }
        }
        
    } else if(jp & J_LEFT) {
        for(y = 0; y < 4; y++) {
            grav_offset = 0;
            if(game[y][0] > 0) gravity[grav_offset++] = game[y][0];
            if(game[y][1] > 0) gravity[grav_offset++] = game[y][1];
            if(game[y][2] > 0) gravity[grav_offset++] = game[y][2];
            if(game[y][3] > 0) gravity[grav_offset++] = game[y][3];
            while(grav_offset < 4) gravity[grav_offset++] = 0;
            for(x = 0; x < 4; x++) {
                if(game[y][x] != gravity[x]) map_changed = true;
                game[y][x] = gravity[x];
            }
        }
        
    } else if(jp & J_RIGHT) {
        for(y = 0; y < 4; y++) {
            grav_offset = 3;
            if(game[y][3] > 0) gravity[grav_offset--] = game[y][3];
            if(game[y][2] > 0) gravity[grav_offset--] = game[y][2];
            if(game[y][1] > 0) gravity[grav_offset--] = game[y][1];
            if(game[y][0] > 0) gravity[grav_offset--] = game[y][0];
            while(grav_offset >= 0) gravity[grav_offset--] = 0;
            for(x = 0; x < 4; x++) {
                if(game[y][x] != gravity[x]) map_changed = true;
                game[y][x] = gravity[x];
            }
        }
    }
    
    return map_changed;
}

/* returns true if anything has changed */
bool move(UINT8 jp) {
    bool map_changed = false;
    if(jp & J_UP) {
        /* merge tiles */
        map_changed = apply_gravity(jp);
        for(x = 0; x < 4; x++)
            for(y = 1; y < 4; y++)
                if(game[y][x] != 0 && game[y-1][x] == game[y][x]) {
                    score += 1<<game[y][x];
                    game[y-1][x]++;
                    game[y][x] = 0;
                    map_changed = true;
                    break;
                }
        return apply_gravity(jp) | map_changed;
        
    } else if(jp & J_DOWN) {
        /* merge tiles */
        map_changed = apply_gravity(jp);
        for(x = 0; x < 4; x++)
            for(y = 2; y >= 0; y--)
                if(game[y][x] != 0 && game[y+1][x] == game[y][x]) {       
                    score += 1<<game[y][x];
                    game[y+1][x]++;
                    game[y][x] = 0;
                    map_changed = true;
                    break;
                }
        return apply_gravity(jp) | map_changed;
    } else if(jp & J_LEFT) {
        /* merge tiles */
        map_changed = apply_gravity(jp);
        for(y = 0; y < 4; y++)
            for(x = 1; x < 4; x++)
                if(game[y][x] != 0 && game[y][x-1] == game[y][x]) {
                    score += 1<<game[y][x];
                    game[y][x-1]++;
                    game[y][x] = 0;
                    map_changed = true;
                    break;
                }
        return apply_gravity(jp) | map_changed;
    } else if(jp & J_RIGHT) {
        /* merge tiles */
        map_changed = apply_gravity(jp);
        for(y = 0; y < 4; y++)
            for(x = 2; x >= 0; x--)
                if(game[y][x] != 0 && game[y][x+1] == game[y][x]) {
                    score += 1<<game[y][x];
                    game[y][x+1]++;
                    game[y][x] = 0;
                    map_changed = true;
                    break;
                }
        return apply_gravity(jp) | map_changed;
    }
    
    return false;
}

void fill_framebuffer() {
    UINT8 *ptr;
    UINT8 digit_tile, border_tile;
    UINT16 score2;
    
    /* each map has 16 field
       each field has 4x4 tiles
       2x2 tiles in the middle is the digit
       4+2+2+4 tiles are the borders around
       there are 8 palettes, so using 2 bits per tile we can achieve 16 colors
       max game tile is 65536
     */
    ptr = frame_buff;
    for(y=0; y<4; y++) {
        for(x=0; x<4; x++) {
            /* top border */
            border_tile = ((game[y][x]>>3)&1)<<3;
            *ptr++ = BORDER_NW + border_tile;
            *ptr++ = BORDER_N  + border_tile;
            *ptr++ = BORDER_N  + border_tile;
            *ptr++ = BORDER_NE + border_tile;
        }
        for(x=0; x<4; x++) {
            /* digit with left & right border, top part */
            digit_tile = game[y][x]<<2;
            border_tile = ((game[y][x]>>3)&1)<<3;
            *ptr++ = BORDER_W  + border_tile;
            *ptr++ = digit_tile++;
            *ptr++ = digit_tile;
            *ptr++ = BORDER_E  + border_tile;
        }
        for(x=0; x<4; x++) {
            /* digit with left & right border, bottom part */
            digit_tile = (game[y][x]<<2)+2;
            border_tile = ((game[y][x]>>3)&1)<<3;
            *ptr++ = BORDER_W  + border_tile;
            *ptr++ = digit_tile++;
            *ptr++ = digit_tile;
            *ptr++ = BORDER_E  + border_tile;
        }
        for(x=0; x<4; x++) {
            /* bottom border */
            border_tile = ((game[y][x]>>3)&1)<<3;
            *ptr++ = BORDER_SW + border_tile;
            *ptr++ = BORDER_S  + border_tile;
            *ptr++ = BORDER_S  + border_tile;
            *ptr++ = BORDER_SE + border_tile;
        }
    }
        
    /* score, last row of framebuffer */
    score2 = score;
    *ptr++ = BORDER_N;
    *ptr++ = BORDER_N;
    *ptr++ = BORDER_N;
    *ptr++ = BORDER_N;
    *ptr++ = SCORE_1;
    *ptr++ = SCORE_2;
    *ptr++ = SCORE_3;
    *ptr++ = BORDER_N;
    *(ptr+4) = DIGIT_0 + (score2%10); score2 /= 10;
    *(ptr+3) = DIGIT_0 + (score2%10); score2 /= 10;
    *(ptr+2) = DIGIT_0 + (score2%10); score2 /= 10;
    *(ptr+1) = DIGIT_0 + (score2%10); score2 /= 10;
    *ptr  = DIGIT_0 + (score2%10);
    ptr += 5;
    *ptr++ = BORDER_N;
    *ptr++ = BORDER_N;
    *ptr++ = BORDER_N;

    /* GBC only, set palette */
    if(_cpu == CGB_TYPE) {
        ptr = palette_buff;
        for(y=0; y<4; y++) {
            /* same palette for digits and borders */
            for(x=0; x<4; x++) {
                memset(ptr, game[y][x] & 7, 4);
                ptr += 4;
            }
            for(x=0; x<4; x++) {
                memset(ptr, game[y][x] & 7, 4);
                ptr += 4;
            }
            for(x=0; x<4; x++) {
                memset(ptr, game[y][x] & 7, 4);
                ptr += 4;
            }
            for(x=0; x<4; x++) {
                memset(ptr, game[y][x] & 7, 4);
                ptr += 4;
            }
        }
        /* default palette for score */
        memset(ptr, 1, 16);    
    }
}

#define FB_POS(x, y) (((y)<<4)+(x))

/* puts the message on top of the framebuffer,
   both lines must be exacly 12 characters in length */
void fill_message(const char* line1, const char* line2) {
    /* row 1 */
    frame_buff[FB_POS(1,6)] = BORDER_NW;
    memset(&frame_buff[FB_POS(2,6)], BORDER_N, 12);
    frame_buff[FB_POS(14,6)] = BORDER_NE;
    /* row 2 */
    frame_buff[FB_POS(1,7)] = BORDER_W;
    memcpy(&frame_buff[FB_POS(2,7)], line1, 12);
    frame_buff[FB_POS(14,7)] = BORDER_E;
    /* row 3 */
    frame_buff[FB_POS(1,8)] = BORDER_W;
    memcpy(&frame_buff[FB_POS(2,8)], line2, 12);
    frame_buff[FB_POS(14,8)] = BORDER_E;
    /* row 4 */
    frame_buff[FB_POS(1,9)] = BORDER_SW;
    memset(&frame_buff[FB_POS(2,9)], BORDER_S, 12);
    frame_buff[FB_POS(14,9)] = BORDER_SE;
    
    /* GBC only, set 2nd palette */
    if(_cpu == CGB_TYPE) {
        memset(&palette_buff[FB_POS(1,6)], 1, 14);
        memset(&palette_buff[FB_POS(1,7)], 1, 14);
        memset(&palette_buff[FB_POS(1,8)], 1, 14);
        memset(&palette_buff[FB_POS(1,9)], 1, 14);
    }
}

/* returns true if 2048 is on the map */
bool has_2048() {
    for(y=0; y<4; y++)
        for(x=0; x<4; x++)
            if(game[y][x] == 11)
                return true;
    return false;
}

/* returns true if no further moves are possible (we lost) */
bool no_move_possible() {
    for(y=0; y<4; y++)
        for(x=0; x<4; x++) {
            /* there is still a free tile */
            if(game[y][x] == 0) return false;
            /* tiles can be merged */
            if(y<3 && game[y+1][x] == game[y][x]) return false;
            if(x<3 && game[y][x+1] == game[y][x]) return false;
        }
    return true;
}

void vblank_irq() {
    if(flags & FLAG_REDRAW) {
        set_bkg_tiles(2, 1, 16, 17, frame_buff);
        if(_cpu == CGB_TYPE) {
            VBK_REG = 1; /* switch to VRAM bank 1 */
            set_bkg_tiles(2, 1, 16, 17, palette_buff);
            VBK_REG = 0;
        }
        flags &= ~FLAG_REDRAW;
    }
}

/* main game routine, please change flags only here */
void play() {
    if(flags & FLAG_WAIT_ACK) {
        if(joypad()&(J_START|J_A)) {
            if(flags & FLAG_RESTART) {
                new_game();
                flags &= ~FLAG_RESTART;
            }
            fill_framebuffer();
            flags &= ~FLAG_WAIT_ACK;
            flags |= FLAG_REDRAW;
        }
    } else if(move(joypad())) {
        add_new_tile();
        fill_framebuffer();
        if(no_move_possible()) {
            fill_message(FAIL_MSG_1, FAIL_MSG_2);
            flags = FLAG_WAIT_ACK|FLAG_RESTART;
        } else if(!(flags & FLAG_2048_ACKED) && has_2048()) {
            fill_message(SUCC_MSG_1, SUCC_MSG_2);
            flags = FLAG_WAIT_ACK|FLAG_2048_ACKED;
        }
        flags |= FLAG_REDRAW;
    }
    while(joypad()); /* the implementation of waitpadup sucks */
}

/* draws a border around map, border is not 
   in the framebuffer as it doesn't change during the game */
void draw_fixed_border() {
    UINT8 border[18];
    memset(border, BORDER_E, 16);
    set_bkg_tiles(1, 1, 1, 16, border);
    memset(border, BORDER_S, 16);
    set_bkg_tiles(2, 0, 16, 1, border);
    memset(border, BORDER_W, 16);
    set_bkg_tiles(18, 1, 1, 16, border);
    memset(border, BORDER_N, 16);
    border[3] = SCORE_1;
    border[4] = SCORE_2;
    border[5] = SCORE_3;
    set_bkg_tiles(2, 17, 16, 1, border);
    memset(border, 0, 18);
    set_bkg_tiles(0, 0, 1, 18, border);
    set_bkg_tiles(19, 0, 1, 18, border);
    
    if(_cpu == CGB_TYPE) { /* GBC only */
        memset(border, 1, 18);
        VBK_REG = 1; /* switch to VRAM bank 1 */
        set_bkg_tiles( 0, 0, 1, 18, border);
        set_bkg_tiles( 1, 0, 1, 18, border);
        set_bkg_tiles(18, 0, 1, 18, border);
        set_bkg_tiles(19, 0, 1, 18, border);
        set_bkg_tiles( 2, 0, 18, 1, border);
        set_bkg_tiles( 2, 17, 16, 1, border);
        VBK_REG = 0;
    }
}

void main() {
    /* init & display welcome screen */
	disable_interrupts();
	DISPLAY_OFF;
    set_bkg_data(0, 128, TILES);
    set_bkg_tiles(0, 0, 20, 18, WELCOME_SCREEN);
    if(_cpu == CGB_TYPE) { /* GBC only */
        set_bkg_palette(0, 8, GBC_PALETTE);
        VBK_REG = 1; /* switch to VRAM bank 1 */
        set_bkg_tiles(0, 0, 20, 18, WELCOME_PALETTE);
        VBK_REG = 0;
    }
    SHOW_BKG;
	DISPLAY_ON;
    enable_interrupts(); /* vblank irq is used by sys_time */
    waitpad(J_START|J_A);
    initrand(sys_time); /* init PRNG with time from start */
    
    /* proceed to the game */
    disable_interrupts();
    draw_fixed_border();
    new_game();
    flags = FLAG_REDRAW;
    fill_framebuffer();
    add_VBL(vblank_irq);
    //snd_irq_enable(VBL_IFLAG);
	enable_interrupts();
    
	while(1) {
        play();
        __asm__("halt");
    }
}
