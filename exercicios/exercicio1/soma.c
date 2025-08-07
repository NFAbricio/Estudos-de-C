#include <stdio.h>
float somaNumero(float n1, float n2, float n3, float n4) {
    return n1 + n2 + n3 + n4;
}

int main(void) {
    float v1, v2, v3, v4, total;
    printf("digite 4 valores: \n");
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);
    total = somaNumero(v1, v2, v3, v4);
    printf("o valor total da soma e: %2.2f\n", total);
}