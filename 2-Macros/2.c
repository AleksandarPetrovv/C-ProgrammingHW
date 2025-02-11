#include <stdio.h>

#define COMPARE(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
    int first = 27;
    int second = 8;
    int bigger = COMPARE(first, second);
    printf("%d", bigger);
}