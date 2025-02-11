#include <stdio.h>
#include "processes.h"

int main(void) {
    printf("\n\nEnter 1, 2, 3 or 4 to start the program.\n");
    int console;
    scanf("%d", &console);

    do {
        printf("\n1 to create process, 2 to print all processes, 3 to stop process and 4 to exit.\n");
        scanf("%d", &console);

        if (console == 1) {
            printf("\nEnter the name of your process: \n");
            char name[30];
            scanf("%29s", name);

            printf("\nThe name is: %s\n", name);

            int new = createNewProcess(name);
            if (new == 0) {
                printf("Too many processes! Unsuccessful creation.\n");
            } else {
                printf("Process created with ID: %d\n", new);
            }
        } else if (console == 2) {
            if (processesCount == 0) {
                printf("\nNo processes running.\n");
            } else {
                printf("\n");
                for (int i = 0; i < processesCount; i++) {
                    printf("Process '%s' has id: %d\n", processes[i].name, processes[i].id);
                }
            }
        } else if (console == 3) {
            printf("Which process do you want to stop? Enter the ID: \n");
            int removeID;
            scanf("%d", &removeID);

            int stop = stopProcess(removeID);
            if (stop == 0) {
                printf("\nProcess not found!\n");
            } else {
                printf("\nProcess with ID %d removed!\n", removeID);
            }
        } else if (console != 1 && console != 2 && console != 3 && console != 4) {
            printf("Wrong command!\n");
        }

    } while (console != 4);

    printf("\nBye!\n");
}