/*  
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050. 
*/

#include <stdio.h>

const int ano_futuro = 2050;

void calculaIdade(int nascimento, int atual, int *idade, int *idade_futura) {
     *idade = atual - nascimento;
     *idade_futura = ano_futuro - nascimento;
}

int main(void) {
    int nascimento, atual;
    int idade_atual, idade_futura;

    printf("Digite o ano de nascimento e ano atual: \n");
    scanf("%d %d", &nascimento, &atual);
    calculaIdade(nascimento, atual, &idade_atual, &idade_futura);

    printf("Idade atual: %d\n", idade_atual);
    printf("Idade em 2050: %d\n", idade_futura);

    return 0;
}