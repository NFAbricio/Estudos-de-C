#include <stdio.h>
#include <stdlib.h>
#include "dev.h"
#include "employee.h"

static void _exhibit_dev(Dev* self){
    Dev* dev = (Dev*)self;
    _exhibit(self);
    printf("Ocupation: Developer | Primary language: %s\n", dev->primaryLanguage);
}

static void _delete_dev(Employee* self){
    printf("Deleting developer: %s\n", self->name);
    free(self);
}

Dev* newDev(int id, const char* name, double salary, const char* language) {
    Employee* base_func = newEmployee(id, name, salary);

    Dev* dev = (Dev*) malloc(sizeof(Dev));
    dev->base = *base_func;
    free(base_func);

    strncpy(dev->primaryLanguage, language, 49);
    dev->primaryLanguage[49] = '\0';

    dev->base._exhibit = _exhibit_dev;
    dev->base._delete = _delete_dev;

    return dev;
}