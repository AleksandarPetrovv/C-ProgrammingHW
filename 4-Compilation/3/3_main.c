#include <stdio.h>
#include "3_transformation.h"

int main(void) {
    char *inputs[] = {
        "123",
        "-321",
        "-00123",
        "0",
        "b",
        "-",
        "$",
        ""
    };

    for (int i = 0; i < 8; i++) {
        printf("Input: \"%s\"\n", inputs[i]);
        transformation result = str_to_long(inputs[i]);

        if (result.error[0] == '\0') {
            printf("Result: %ld\n", result.result);
        } else {
            printf("Error: %s\n", result.error);
        }
        printf("\n");
    }
}