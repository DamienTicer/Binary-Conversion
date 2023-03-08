#include <stdlib.h>
#include "dec2bin.h"

char* dec2bin(int dec) {
    // Find the number of bits required to represent dec
    int num_bits = 1;
    int temp = dec;
    while (temp >>= 1) {
        num_bits++;
    }

    // Allocate memory for the binary string
    char* bin = malloc(num_bits+1);

    // Convert dec to binary
    for (int i = num_bits-1; i >= 0; i--) {
        bin[i] = (dec & 1) ? '1' : '0';
        dec >>= 1;
    }
    bin[num_bits] = '\0';

    return bin;
}
