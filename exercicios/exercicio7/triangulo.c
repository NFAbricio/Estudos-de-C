#include <stdio.h>

double calculaArea(double base, double altura) {
    return (base*altura)/2;
}

int main(void) {
    double base, altura, area;

    printf("Digite a base e a altura: \n");
    scanf("%lf %lf", &base, &altura);
    area = calculaArea(base, altura);
    printf("%.2lf\n", area);

    return 0;
}