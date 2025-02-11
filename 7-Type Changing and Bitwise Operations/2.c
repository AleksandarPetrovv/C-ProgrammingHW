#include <stdio.h>

int switchLights(int light, int room) {
    int index = 8 - room;
    light |= (1 << index);
    return light;
}

void printState(int light) {
    int tempLight = light;
    if (tempLight == 0) {
        printf("All lights are turned off.");
    } else if (tempLight == 255) {
        printf("All lights are turned on.");
    } else {
        printf("The light is on in room ");
        for (int i = 7; i >= 0; i--) {
            if ((tempLight >> i) & 1) {
                printf("%d, ", 8 - i);
            }
        }
        printf("\b\b \b.\n");
    }
}

int main(void) {
    int light1 = 0;
    printState(light1);

    printf("\n\nEnter 1, 2 or 3 to start the program first.\n");
    int cmd;
    scanf("%d", &cmd);

    do {
        printf("\n1 to switch lights, 2 to print state, and 3 to exit.\n");
        scanf("%d", &cmd);

        if (cmd == 1) {
            int switchCmd;
            printf("Which light do you want to switch?\n");
            scanf("%d", &switchCmd);
            if (switchCmd >= 1 && switchCmd <= 8) {
                light1 = switchLights(light1, switchCmd);
            } else {
                printf("Invalid room number. Please enter a number between 1 and 8.\n");
            }
        } else if (cmd == 2) {
            printState(light1);
        } else if (cmd != 1 && cmd != 2 && cmd != 3) {
            printf("Bad command.\n");
        }

    } while (cmd != 3);

    printf("Exiting program.\n");
}