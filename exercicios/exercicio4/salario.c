#include <stdio.h>
float calculaSalario(float salario, float aumento) {
    float percentual = 1+(aumento/100);
    return salario * percentual;
}

int main(void) {
    float salario, aumento, novoSalario;

    printf("Digite seu salário e depois o percentual de aumento: ");
    scanf("%f %f", &salario, &aumento);
    novoSalario = calculaSalario(salario, aumento);
    printf("seu salario apos a alteracao: %.2f", novoSalario);
    return 0;
}