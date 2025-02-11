#include <stdio.h>

#define SWAP(A, B, TYPE) \
  { TYPE temp = A;       \
    A = B;               \
    B = temp; }

void integerSwap() {
    printf("With integer types:\n\n");
    int d1 = 1, d2 = 2;
    printf("Before:\nd1 = %d\nd2 = %d\n\n", d1, d2);
    SWAP(d1, d2, int);
    printf("Post:\nd1 = %d\nd2 = %d\n\n\n", d1, d2);
}

void floatSwap() {
    printf("With float types:\n\n");
    double f1 = 1.5, f2 = 2.1;
    printf("Before:\nf1 = %.1lf\nf2 = %.1lf\n\n", f1, f2);
    SWAP(f1, f2, double);
    printf("Post:\nf1 = %.1lf\nf2 = %.1lf\n\n\n", f1, f2);
}

void charSwap() {
    printf("With char types:\n\n");
    char c1 = 'X', c2 = 'Y';
    printf("Before:\nc1 = %c\nc2 = %c\n\n", c1, c2);
    SWAP(c1, c2, char);
    printf("Post:\nc1 = %c\nc2 = %c", c1, c2);
}
    
int main(void) {
    integerSwap();
    floatSwap();
    charSwap();
}