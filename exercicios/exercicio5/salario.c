#include <stdio.h>

const double gatrificacao = 50;
const double imposto = 0.10;

double calculaSalario(double salario) {
    double valor_imposto = salario * imposto;
    return salario + gatrificacao - valor_imposto;
}

int main(void) {
    
    double sal, sal_final;

    printf("Digite o salario: \n");
    scanf("%lf", &sal);
    sal_final = calculaSalario(sal);
    printf("Seu salario agora e: %.2lf", sal_final);

    return 0;
}
