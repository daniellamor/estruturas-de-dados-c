#include <stdio.h>

int main() {
    float lado, base, altura, raio;

    printf("Quadrado - lado: ");
    scanf("%f", &lado);
    printf("Area: %.2f\n", lado * lado);

    printf("Retangulo - base e altura: ");
    scanf("%f %f", &base, &altura);
    printf("Area: %.2f\n", base * altura);

    printf("Circulo - raio: ");
    scanf("%f", &raio);
    printf("Area: %.2f\n", 3.14 * raio * raio);

    return 0;
}
