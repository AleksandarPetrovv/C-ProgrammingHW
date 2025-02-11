#include "5_maths.h"
#include <stdio.h>

int factoriel(int a) {
    int result = 1;
    for (int i = a; i > 0; i--) {
        result *= i;
    }

    return result;
}