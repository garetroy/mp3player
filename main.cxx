#include "mp3header.h"

int main()
{
    uint32_t k = 4292870144;
    mp3_header* n = new mp3_header(k);
    delete n;
    return 0;
}
