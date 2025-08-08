/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
*/

#include <stdio.h>

void valorFabrica(double fabrica, double lucro, double imposto, double *valor_lucro, double *valor_imposto, double *valor_final) {
    *valor_lucro = fabrica * (lucro/100);
    *valor_imposto = fabrica * (imposto/100);
    *valor_final = fabrica + *valor_lucro + *valor_imposto;
}

int main(void) {
    double fabrica, lucro, imposto;
    double valor_lucro, valor_imposto, valor_final;

    printf("Digite o valor do custo de fabrica, lucro e imposto: \n");
    scanf("%lf %lf %lf", &fabrica, &lucro, &imposto);
    valorFabrica(fabrica, lucro, imposto, &valor_lucro, &valor_imposto, &valor_final);
    printf("a) Lucro do distribuidor: %.2lf\n", valor_lucro);
    printf("b) Valor dos impostos: %.2lf\n", valor_imposto);
    printf("c) Valor final: %.2lf\n", valor_final);

    return 0;
}
