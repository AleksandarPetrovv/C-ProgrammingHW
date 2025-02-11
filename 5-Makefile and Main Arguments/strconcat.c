#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Correct input: ./strconcat <string1> <string2>\n");
        return 1;
    }

        if (strConcat(argv[1], argv[2]) != NULL) {
        printf("Concatenated string: %s\n", argv[1]);
    }

    return 0;
}