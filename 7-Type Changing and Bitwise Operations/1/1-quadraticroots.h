#ifndef QUADRATICROOTS
#define QUADRATICROOTS

typedef struct {
    long double x1;
    long double x2;
    int noRealRoots;
} quadraticRootsResult;

quadraticRootsResult findRoots(long double a, long double b, long double c);

#endif