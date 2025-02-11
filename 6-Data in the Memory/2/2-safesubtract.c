#include <stdio.h>
#include "2-safeint.h"
#include "2-util.h"

int main(void) {
    int num1, num2;
    printf("Enter two integers to subtract: ");
    scanf("%d %d", &num1, &num2);

    SafeResult result = safeSubtract(num1, num2);

    if (result.errorFlag == 1) {
        handleError(1);
    } else {
        printf("Result: %d\n", result.value);
    }
}