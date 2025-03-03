#include <stdio.h>

int str_len(char *str) {
    char *p;

    for (p = str; *p != '\0'; p++);

    return p - str;
}

int main(void) {
    char str[] = "Hello...,,,!!!";
    printf("The length of the string is: %d characters!\n", str_len(str));
}