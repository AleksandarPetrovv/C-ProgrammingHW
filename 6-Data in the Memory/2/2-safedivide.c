#include <stdio.h>
#include "2-safeint.h"
#include "2-util.h"

int main(void) {
    int num1, num2;
    printf("Enter two integers to divide: ");
    scanf("%d %d", &num1, &num2);

    SafeResult result = safeDivide(num1, num2);

    if (result.errorFlag == 1) {
        handleError(2);
    } else {
        printf("Result: %d\n", result.value);
    }
}