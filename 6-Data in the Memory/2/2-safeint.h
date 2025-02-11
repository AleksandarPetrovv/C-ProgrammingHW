#include <stdio.h>

#ifndef SAFEINT
#define SAFEINT

typedef struct {
    int value;
    int errorFlag;
} SafeResult;

SafeResult safeAdd(int a, int b);
SafeResult safeSubtract(int a, int b);
SafeResult safeMultiply(int a, int b);
SafeResult safeDivide(int a, int b);
SafeResult safeStrToInt(const char str[]);

#endif