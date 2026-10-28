#ifndef __2048_MUSIC_H__
#define __2048_MUSIC_H__

#include "song0_c.h"
#include "song1_c.h"
#include "song2_c.h"

#define SND_SONG_COUNT 3

const UINT8* const SND_SONG_DATA[SND_SONG_COUNT] = {
    SONG0_DATA,
    SONG1_DATA,
    SONG2_DATA
};

const UINT8** const SND_SONG_NODES[SND_SONG_COUNT] = {
    (const UINT8**)SONG0_NODES,
    (const UINT8**)SONG1_NODES,
    (const UINT8**)SONG2_NODES
};

#endif

