#include <stdio.h>

int main() {

    double raio, areaCirculo;
    double PI = 3.1415;

    printf("Digite o valor do raio:");
    scanf("%lf", &raio);

    areaCirculo = PI * (raio * raio);
    printf("A area do circulo é: %lf", areaCirculo);
}