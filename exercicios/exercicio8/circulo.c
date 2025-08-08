#include <stdio.h>

const double pi = 3.14;

double areaCirculo(double raio) {
    return pi*(raio*raio);
}

int main(void) {
    
    double area, raio;

    printf("Digite o raio: \n");
    scanf("%lf", &raio);
    area = areaCirculo(raio);
    printf("Area do circulo: %.2lf\n", area);

    return 0;
}


