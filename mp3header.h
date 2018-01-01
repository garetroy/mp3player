#ifndef _MP3HEADER_H_
#define _MP3HEADER_H_

#include <stdio.h>
#include <cstdint>
#include "types.h"
#include "tools.h"

class mp3_header
{
    public:

        mp3_header(uint32_t);
        ~mp3_header(void);
        
    private:
        uint32_t              rawinput;
        mpeg_version          version;
        layer_description     description; 
        bool                  protection_bit;
        unsigned int          bitrate;
        sampling_rate         sampling;
        bool                  padding_bit;
        channel_mode          channel;
        mode_extension        mode; 
        mode_extension_layer3 mode3;
        bool                  copyright;  
        bool                  original;
        emphasis              emp; 
};
#endif
