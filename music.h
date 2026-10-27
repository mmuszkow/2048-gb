#ifndef __2048_MUSIC_H__
#define __2048_MUSIC_H__

#include "song0.h"
#include "song1.h"

#define SND_SONG_COUNT 2

const UINT8* SND_SONGS[SND_SONG_COUNT] = {
    &SND_SONG0[0],
    &SND_SONG1[0]
};

#endif

