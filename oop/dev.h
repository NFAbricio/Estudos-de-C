#ifndef DEV_H
#define DEV_H

#include "employee.h"

typedef struct Dev {
    Employee base;
    char primaryLanguage[50];
} Dev;

Dev* newDev(int id, const char* name, double salary, const char* language);

#endif