#include <stdio.h>

#define SQR(A, B) (((A) + (B)) * ((A) + (B)))

int main(void) {
    int a = 5;
    int b = 10;
    int result = SQR(a, b);
    printf("%d", result);
}