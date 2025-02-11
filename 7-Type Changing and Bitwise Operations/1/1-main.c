#include <stdio.h>
#include "1-quadraticroots.h"

#define INITIALIZE(TYPE, A, B, C, CLASS) \
    TYPE a##CLASS = A;                   \
    TYPE b##CLASS = B;                   \
    TYPE c##CLASS = C;

#define ROOT(CLASS)                                                                                 \
    {                                                                                               \
        long double a##CLASS##_ld = (long double) a##CLASS;                                         \
        long double b##CLASS##_ld = (long double) b##CLASS;                                         \
        long double c##CLASS##_ld = (long double) c##CLASS;                                         \
        quadraticRootsResult result = findRoots(a##CLASS##_ld, b##CLASS##_ld, c##CLASS##_ld);       \
        if (result.noRealRoots == 0) {                                                              \
            if (result.x1 == result.x2) {                                                           \
                printf("x1 = x2 = %.2Lf\n", result.x1);                                             \
            } else {                                                                                \
            printf("x1 = %.2Lf, x2 = %.2Lf\n", result.x1, result.x2);                               \
            }                                                                                       \
        } else {                                                                                    \
            printf("No real roots\n");                                                              \
        }                                                                                           \
    }

int main(void) {
    INITIALIZE(int, 1, -5, 6, Int);
    ROOT(Int);

    INITIALIZE(float, 1.0, -4.0, 4.0, Float);
    ROOT(Float);

    INITIALIZE(double, 1.00, -7.00, 10.00, Double);
    ROOT(Double);
}