#include <stdio.h>
#include <string.h>

void strHalf(char str[], char **p) {
    *p = &str[strlen(str) / 2];
}

int main(void) {
    char str[] = "First Half Second Half";
    char *p;
    
    strHalf(str, &p);
    printf("%s\n", p);

    return 0;
}