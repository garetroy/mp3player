#include "mp3header.h"

mp3_header::mp3_header(uint32_t frame)
{
    uint32_t sync = getBits(frame,0,10);
    if(sync == 0x7FF)
        printf("WORKS!");
}

mp3_header::~mp3_header()
{
    return;
}
