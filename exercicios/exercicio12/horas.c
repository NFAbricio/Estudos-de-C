/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto.
*/

#include <stdio.h>

void calculaSalario(double salario_min, double horas_trabalhadas, double *vlr_horas, double *salario_bruto, double *imposto, double *salario_final) {
    *vlr_horas = salario_min/2;
    *salario_bruto = horas_trabalhadas * *vlr_horas;
    *imposto = *salario_bruto * 0.03;
    *salario_final = *salario_bruto - *imposto;
}


int main(void) {
    
    double salario_min, horas_trabalhadas;
    double vlr_horas, salario_bruto, imposto, salario_final;

    printf("Digite o salario minimo e as horas trabalhadas: \n");
    scanf("%lf %lf", &salario_min, &horas_trabalhadas);
    calculaSalario(salario_min, horas_trabalhadas, &vlr_horas, &salario_bruto, &imposto, &salario_final);

    printf("Salario final: R$%.2lf\n", salario_final);
    printf("Salario bruto: R$%.2lf\n");
    
    return 0;
}