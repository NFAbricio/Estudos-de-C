#include <stdio.h>

double calculaRendimento(double deposito, double taxa) {
     double rendimento = deposito * (taxa/100);
     printf("Valor do rendimento: %.2lf\n", rendimento);
    return rendimento + deposito;
}

int main(void) {
    double deposito, taxa, total;
    printf("digite valor do deposito e taxa: \n");
    scanf("%lf %lf", &deposito, &taxa);

    total = calculaRendimento(deposito, taxa);

    printf("Valor total %.2lf\n", total);

    return 0;

}