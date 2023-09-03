#include <stdio.h>

int main() {

    float reais = 10.0, dolar = 4.98, valorConversao;

    printf("Valor em reais: R$");
    scanf("%f", &reais);

    valorConversao = reais / dolar;
    
    printf("O valor da conversao é: %f", valorConversao);
}
