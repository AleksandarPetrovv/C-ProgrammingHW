#include <stdio.h>

int nok(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else if (a < b) {
        max = b;
    }
    for (int i = max; 1; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}

int main(void) {
    int a = 12, b = 18;
    printf("Smallest shared divisible of %d and %d is: %d\n", a, b, nok(a, b));
}
