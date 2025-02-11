#include <stdio.h>
#ifndef UTIL
#define UTIL

void handleError(int type) {
if (type == 1) {
printf("Error: Operation caused an overflow or underflow.\n");
} else if (type == 2) {
        printf("Error: Operation caused an overflow or underflow or the divisor is 0.\n");
}
}

#endif