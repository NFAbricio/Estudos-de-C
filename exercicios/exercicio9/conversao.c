/*
Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas. 
*/ 

#include <stdio.h>

const double pe = 12;
const double jarda = 3;
const double milha = 1760;

void converter_medidas(double medida_pes, double *polegadas_ptr, double *jardas_ptr, double *milhas_ptr)
{
    *polegadas_ptr = medida_pes * pe;
    *jardas_ptr = medida_pes / jarda;
    *milhas_ptr = *jardas_ptr / milha;
}


int main(void) {
    
    double pes, valor_polegada, valor_jarda, valor_milha;

    printf("Digite a medida em pes: \n");
    scanf("%lf", &pes);
    converter_medidas(pes, &valor_polegada, &valor_jarda, &valor_milha);

    printf("%g polegadas\n", valor_polegada);
    printf("%g jardas\n", valor_jarda);
    printf("%g milhas\n", valor_milha);

      

    return 0;
}

