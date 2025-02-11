#ifndef PERSON_H
#define PERSON_H

#define MAX 20

typedef struct {
    char firstName[MAX];
    char middleName[MAX];
    char lastName[MAX];
    int birthYear;
} Person;

#endif