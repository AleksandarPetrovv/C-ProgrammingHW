#include <stdio.h>

int main(void) {
    printf("Help Menu\n");
    printf("==========\n\n");

    printf("1. strlength\n");
    printf("   - Purpose: Finds the length of a string.\n");
    printf("   - Usage: ./strlength <string>\n");
    printf("   - Example: ./strlength Ivan\n");
    printf("     Output: 4\n\n");

    printf("2. strconcat\n");
    printf("   - Purpose: Concatenates two strings. The second string is appended to the first.\n");
    printf("   - Usage: ./strconcat <string1> <string2>\n");
    printf("   - Example: ./strconcat Hello World\n");
    printf("     Output: HelloWorld\n\n");

    printf("3. strcompare\n");
    printf("   - Purpose: Compares two strings lexicographically.\n");
    printf("   - Usage: ./strcompare <string1> <string2>\n");
    printf("   - Example: ./strcompare Alex Boyan\n");
    printf("     Output: -1\n\n");
}