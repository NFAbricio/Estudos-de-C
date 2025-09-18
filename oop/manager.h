#ifndef GERENTE_H
#define GERENTE_H

#include "employee.h"

typedef struct Manager {
    Employee base; // Inheritance: Manager "is an" Employee
    double bonus;
} Manager;

Manager* newManager(int id, const char* name, double salary, double bonus);

#endif