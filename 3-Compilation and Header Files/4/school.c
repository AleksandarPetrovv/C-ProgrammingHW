#include <stdio.h>
#include <string.h>
#include "schoolclass.h"
#include "schoolroom.h"

#define CLASSES_COUNT 20
#define ROOMS_COUNT 10

typedef struct {
    SchoolClass classes[CLASSES_COUNT];
    SchoolRoom rooms[ROOMS_COUNT];
} School;

int main(void) {
    School TUES;

    TUES.classes[0].gradeNumber = 9;
    TUES.classes[0].paralelka = 'V';
    
    strcpy(TUES.classes[0].students[0].firstName, "Aleksandar");
    strcpy(TUES.classes[0].students[0].middleName, "Zlatkov");
    strcpy(TUES.classes[0].students[0].lastName, "Petrov");
    TUES.classes[0].students[0].birthYear = 2009;
    
    strcpy(TUES.classes[0].mainTeacher.firstName, "Teacher's first name");
    strcpy(TUES.classes[0].mainTeacher.middleName, "Teacher's middle name");
    strcpy(TUES.classes[0].mainTeacher.lastName, "Teacher's last name");
    TUES.classes[0].mainTeacher.birthYear = 1500;
    
    TUES.rooms[0].roomNumber = 9222;
}