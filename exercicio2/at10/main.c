#include <stdio.h>

int main() {

    float custoFabrica, porcentagemDistribuidor = 0.28, imposto = 0.45 , custoFinal;

    printf("Digite o custo de fabrica:");
    scanf("%f", &custoFabrica);

    custoFinal = (custoFabrica * imposto) + (custoFabrica * porcentagemDistribuidor) + custoFabrica;

    printf("O custo final é: R$%f", custoFinal);

}