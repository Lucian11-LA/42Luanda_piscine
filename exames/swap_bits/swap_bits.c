#include <stdio.h>

unsigned char swap_bits(unsigned char octet) {
    unsigned char left_half = (octet & 0xF0) >> 4;
    unsigned char right_half = (octet & 0x0F) << 4;
    return left_half | right_half;
}
