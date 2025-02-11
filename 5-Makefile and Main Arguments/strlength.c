#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Correct input: ./strlength <string>\n");
        return 1;
    }

    printf("Length of the string: %d\n", strLength(argv[1]));
    return 0;
}