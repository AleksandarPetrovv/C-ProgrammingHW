#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Enter a string: ");
    char str[30];
    fgets(str, sizeof(str), stdin);

    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }

    printf("String without newline: %s\n", str);
}