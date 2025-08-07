#include <stdio.h>

float somaNota(float v1, float v2, float v3) {
    return v1 + v2 + v3;
}

float valorMedia(float media) {
    return media / 3;
}

int main(void) {
    float nota1, nota2, nota3, soma, resultado;
    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    soma = somaNota(nota1, nota2, nota3);
    resultado = valorMedia(soma);
    printf("O resultado da media e: %2.2f\n", resultado);
    return 0;
}