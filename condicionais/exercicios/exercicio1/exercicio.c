#include <stdio.h>

char mediaPonderada(int nota_trab, int nota_sem, int nota_lab) { 

    double media = (nota_trab * 2 + nota_sem * 3 + nota_lab * 5) / 10.0;

    if (media >= 8 && media <= 10){
        return 'A';
    } else if (media >= 7 && media < 8) {
        return 'B';
    } else if (media >= 6 && media < 7) {
        return 'C';
    } else if (media >= 5 && media < 6) {
        return 'D';
    } else if (media >= 0 && media < 5 )  {
        return 'E';
    }
}



int main() {
    int nota_trab, nota_sem, nota_lab;
    char conceito;

    printf("Digite a nota do trabalho: ");
    scanf("%d", &nota_trab);

    printf("Digite a nota da semestre: ");
    scanf("%d", &nota_sem);

    printf("Digite a nota do laboratorio: ");
    scanf("%d", &nota_lab);

    conceito = mediaPonderada(nota_trab, nota_sem, nota_lab);

    printf("Conceito do aluno e: %c\n", conceito);
    
    return 0;
}