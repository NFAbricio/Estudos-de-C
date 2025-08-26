#include <stdio.h>

int main(void) {
    int *ponteiro_nulo = NULL;

    printf("Tentando escrever em um ponteiro nulo para causar uma falha de segmentação...\n");

    // Esta linha vai tentar acessar um endereço de memória inválido (0x0)
    // e o sistema operacional vai encerrar o programa.
    *ponteiro_nulo = 42;

    // Esta linha nunca será alcançada.
    printf("Isso nunca será impresso.\n");

    return 0;
}
