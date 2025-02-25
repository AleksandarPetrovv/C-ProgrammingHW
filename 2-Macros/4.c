#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_##command

#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Goodbye.\n");
}

DEFINE_COMMAND(start, external) {
    printf("Hello!\n");
}

int main(void) {
    internal_quit_command();
    external_start_command();
    return 0;
}