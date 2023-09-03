#include <stdio.h>

int main() {

    float custo, frete, despesas, valorVenda, valorBruto, lucro, porcentagemLucro;

    printf("Digite o custo:");
    scanf("%f", &custo);

    printf("Digite o frete:");
    scanf("%f", &frete);

    printf("Digite as despesas:");
    scanf("%f", &despesas);

    valorBruto = custo + frete + despesas;

    printf("O valor bruto é: R$%f. Digite o valor de venda:", valorBruto);
    scanf("%f", &valorVenda);

    lucro = valorVenda - valorBruto;
    porcentagemLucro = (lucro / valorBruto)* 100;

    printf("Sua porcentagem liquida é: %f%%", porcentagemLucro);
}
