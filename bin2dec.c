#include <string.h>
#include "bin2dec.h"

int bin2dec(char* bin) {
    int len = strlen(bin);
    int dec = 0;
    int base = 1;

    for (int i = len-1; i >= 0; i--) {
        if (bin[i] == '1') {
            dec += base;
        }
        base *= 2;
    }

    return dec;
}