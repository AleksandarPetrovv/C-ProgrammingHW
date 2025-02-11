#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "2-safeint.h"

SafeResult safeAdd(int a, int b) {
    SafeResult result;

    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorFlag = 1;
        result.value = 0;
    } else {
        result.errorFlag = 0;
        result.value = a + b;
    }
    return result;
}

SafeResult safeSubtract(int a, int b) {
    SafeResult result;

    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorFlag = 1;
        result.value = 0;
    } else {
        result.errorFlag = 0;
        result.value = a - b;
    }
    return result;
}

SafeResult safeMultiply(int a, int b) {
    SafeResult result;

    if (a != 0 && (b > INT_MAX / a || b < INT_MIN / a)) {
        result.errorFlag = 1;
        result.value = 0;
    } else {
        result.errorFlag = 0;
        result.value = a * b;
    }
    return result;
}

SafeResult safeDivide(int a, int b) {
    SafeResult result;
    
    if (b == 0) {
        result.errorFlag = 1;
        result.value = 0;
    } else {
        result.errorFlag = 0;
        result.value = a / b;
    }
    return result;
}

SafeResult safeStrToInt(const char str[]) {
    SafeResult result;

    result.errorFlag = 0;
    result.value = 0;
    int sign = 1;
    int skipFirst = 0;

    if (str[0] == '-') {
        sign = -1;
        skipFirst = 1;
    }

    int tempResult = 0;
    char *endptr;
    tempResult = strtol(str + skipFirst, &endptr, 10);

    if (*endptr != '\0') {
        result.errorFlag = 1;
        return result;
    }

    SafeResult addResult = safeAdd(0, tempResult);
    if (addResult.errorFlag == 1) {
        result.errorFlag = 1;
        return result;
    }

    result.value = (tempResult * sign);
    return result;
}