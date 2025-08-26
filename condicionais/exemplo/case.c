#include <stdio.h>

int main() {
    int i;
    printf("Digite um numero: ");
    scanf("%d%*c", &i);
    switch(i) {
        case 1:
            printf("sabado");
            break;
        case 2:
            printf("domingo");
            break;
        default:
            printf("nao e final de semana");
    }
    return 0;
}