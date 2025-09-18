#include <stdio.h>
#include <stdlib.h>
#include "manager.h"
#include "employee.h"

static void _exhibit_manager(Manager* self){
    Manager* manager = (Manager*)self;
    _exhibit(self);
    printf("Occupation: Manager | Bonus: R$%.2f\n", manager->bonus);
}

static void _delete_manager(Employee* self) {
    printf("Deleting manager: %s\n", self->name);
    free(self);
}

Manager* new_manager(int id, const char* name, double salary, double bonus) {
    // Cria a parte base do objeto
    Employee* base_func = new_employee(id, name, salary);
    
    // Aloca memória para o objeto completo (Gerente) e copia a base
    Manager* manager = (Manager*) malloc(sizeof(Manager));
    *manager = *(Manager*)base_func; // Copia os dados da base
    free(base_func); // Libera a memória temporária da base

    manager->bonus = bonus;

    // SOBRESCRITA DOS MÉTODOS (Polimorfismo)
    manager->base._exhibit = _exhibit_manager;
    manager->base._delete = _delete_manager;

    return manager;
}