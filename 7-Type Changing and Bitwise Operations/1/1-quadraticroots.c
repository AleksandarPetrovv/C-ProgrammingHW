#include <stdio.h>
#include <math.h>
#include "1-quadraticroots.h"

quadraticRootsResult findRoots(long double a, long double b, long double c) {
    quadraticRootsResult result;
    long double discr = (b * b) - (4.0 * a * c);
    if (discr > 0) {
        result.x1 = (-b + sqrtl(discr)) / (2.0 * a);
        result.x2 = (-b - sqrtl(discr)) / (2.0 * a);
        result.noRealRoots = 0;
    } else if (discr == 0) {
        result.x1 = -b / (2.0 * a);
        result.x2 = result.x1;
        result.noRealRoots = 0;
    } else {
        result.noRealRoots = 1;
    }

    return result;
}