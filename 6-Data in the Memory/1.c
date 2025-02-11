#include <stdio.h>
#include <limits.h>

#define PRINT_INFO(TYPE, S_FORMAT, U_FORMAT, BYTES, MIN_SIGNED, MAX_SIGNED, MAX_UNSIGNED) \
    printf("Type: %s\n", #TYPE);                                                          \
    printf("Signed Format: %s\n", S_FORMAT);                                              \
    printf("Unsigned Format: %s\n", U_FORMAT);                                            \
    printf("Bytes: %zu\n", (BYTES));                                                      \
    printf("Min Signed: " S_FORMAT "\n", (MIN_SIGNED));                                   \
    printf("Max Signed: " S_FORMAT "\n", (MAX_SIGNED));                                   \
    printf("Max Unsigned: " U_FORMAT "\n", (MAX_UNSIGNED));                               \
    printf("\n");

int main(void) {
    PRINT_INFO(char, "%d", "%u", sizeof(char), SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
    PRINT_INFO(short, "%d", "%u", sizeof(short), SHRT_MIN, SHRT_MAX, USHRT_MAX);
    PRINT_INFO(int, "%d", "%u", sizeof(int), INT_MIN, INT_MAX, UINT_MAX);
    PRINT_INFO(long, "%ld", "%lu", sizeof(long), LONG_MIN, LONG_MAX, ULONG_MAX);
    PRINT_INFO(long long, "%lld", "%llu", sizeof(long long), LLONG_MIN, LLONG_MAX, ULLONG_MAX);
}