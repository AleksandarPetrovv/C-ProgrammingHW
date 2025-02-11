#include <stdio.h>
#include <stdlib.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Correct input: ./strcompare <string1> <string2>\n");
        return 1;
    }

    int result = strCompare(argv[1], argv[2]);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result == 1) {
        printf("The first string is alphabetically bigger than the second string.\n");
    } else {
        printf("The first string is alphabetically smaller than the second string.\n");
    }

    return 0;
}