#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int strLength(const char str[]) {
    return strlen(str);
}

char *strConcat(char str1[], char str2[]) {
    if (strlen(str1) + strlen(str2) > 50) {
        printf("The combined length of the two strings cannot exceed 50 characters.\n");
        return NULL;
    }

    strcat(str1, str2);
    return str1;
}

int strCompare(char str1[], char str2[]) {
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        return 0;
    } else if (cmp > 0) {
        return 1;
    } else if (cmp < 0) {
        return -1;
    }
}