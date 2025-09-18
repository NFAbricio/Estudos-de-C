#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct Employee {
    int id;
    char name[100];
    double salary;

    void (*_improveSalary)(struct Employee*,  double salary);
    void (*_exhibit)(struct Employee*);
    void (*_delete)(struct Employee*);
} Employee;


Employee* newEmployee(int id, const char* name, double salary);
void deleteEmployee(Employee* func);

#endif