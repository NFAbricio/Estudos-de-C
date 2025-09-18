#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

static void _delete(Employee* self) {
    free(self);
}

static void _improveSalary(Employee* self, double percentage) {
    if (percentage > 0) {
        self->salary += self->salary * (percentage / 100.00);
        printf("Salary improved by %.2f%% for employee %s.\n", percentage, self->name);
    }
}

static void _exhibit(Employee* self) {
    printf("ID: %d | Name %s | Salary: R$%.2f\n", self->id, self->name, self->salary);
}

Employee* newEmployee(int id, const char* name, double salary) {
    Employee* func = (Employee*)malloc(sizeof(Employee));
    if (!func) return NULL;

    func->id = id;
    strncpy(func->name, name, 99);
    func->name[99] = '\0';
    func->salary = salary;

    func->_improveSalary = _improveSalary;
    func->_exhibit= _exhibit;

    return func;
}

void deleteEmployee(Employee* func) {
    if (func && func-> _delete){
        func->_delete(func);
    }
}