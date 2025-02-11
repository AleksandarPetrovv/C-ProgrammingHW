#ifndef PROCESSES
#define PROCESSES

typedef struct {
    int id;
    char name[30];
} Process;

extern Process processes[5];
extern int processesCount;

int nextProcessID();
int createNewProcess(char name[30]);
int stopProcess(int stopID);

#endif