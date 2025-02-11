#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

#define PERSON_COUNT 50

typedef struct {
    int roomNumber;
    Person people[PERSON_COUNT];
} SchoolRoom;

#endif