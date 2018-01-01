#ifndef _TOOLS_H_
#define _TOOLS_H_

#include <cstdint>

uint32_t createMask(uint32_t a, uint32_t b)
{
    /*
        This function creates a mask for 
        getting bits from location a to 
        location b
    
        Source:
            https://stackoverflow.com/questions/
            8011700/how-do-i-extract-specific-
            n-bits-of-a-32-bit-uint32_t-integer-in-c
    */
    uint32_t r = 0;
    for(uint32_t i=a; i<=b; i++)
        r |= 1 << i;
    
    return r;
}

uint32_t getBits(uint32_t in, uint32_t a, uint32_t b)
{
    /*
        Returns the bits from a to b, using the
        uint32_t integer given.
    */

    uint32_t r = createMask(a,b) & in;

    return r;
}

bool getFrontBit(uint32_t in)
{
    /*
        Returns the first bit from the uint32_t value
    */

    uint32_t temp = 0x8;
    return (bool)(in & temp);
}

#endif
