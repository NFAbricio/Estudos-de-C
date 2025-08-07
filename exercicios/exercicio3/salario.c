#include <stdio.h>

#define valor_aumento 1.25

float novoSalario(float valor) {
    return valor * valor_aumento;
}

int main(void) {
    float salario, aumento;
    printf("Digite o salario: \n");
    scanf("%f", &salario);
    aumento = novoSalario(salario);
    printf("Seu salario com aumento ficou em R$%.2f\n", aumento);
    return 0;
}