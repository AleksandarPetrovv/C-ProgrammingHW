#include <stdio.h>
#include <string.h>
#include "processes.h"

Process processes[5];
int processesCount = 0;

int nextProcessID() {
    static int id = 1;
    if (processesCount >= 5) {
        return 0;
    }
    return id++;
}

int createNewProcess(char name[30]) {
    if (processesCount >= 5) {
        return 0;
    }

    int id = nextProcessID();
    if (id == 0) {
        return 0;
    }

    Process temp;
    temp.id = id;
    strcpy(temp.name, name);

    processes[processesCount] = temp;
    processesCount++;

    return id;
}

int stopProcess(int stopID) {
    for (int i = 0; i < processesCount; i++) {
        if (processes[i].id == stopID) {
            for (int j = i; j < processesCount - 1; j++) {
                processes[j] = processes[j + 1];
                processes[j].id = j + 1;
            }
            processesCount--;
            return 1;
        }
    }
    return 0;
}