#include "employee.h"
#include "employee.c"
#include "dev.h"
#include "manager.h"
#include <stdio.h>

int main() {

    Employee* team[3];

    team[0] = (Employee*) newManager(101, "Carlos", 8000.0, 1500.0);
    team[1] = (Employee*) newDev(237, "Ana", 5000.0, "C++");
    team[2] = (Employee*) newDev(421, "Pedro", 5000.0, "Go");

    printf("--- Team Members ---\n");
    for(int i = 0; i< 3; i++){
        team[i]->_exhibit(team[i]);
        printf("\n");
    }

    printf("--- Finishing the program and cleaning up memory ---\n");
    
    for(int i = 0; i<3; i++){
        deleteEmployee(team[i]);
    }

}