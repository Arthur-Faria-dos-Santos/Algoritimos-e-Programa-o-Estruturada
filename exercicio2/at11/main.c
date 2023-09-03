#include <stdio.h>
    // Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
    // mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
    // Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas,
    // o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor
int main() {
    int carros, comissFixa;
    float salarioFixo, totalVendas, salarioFinal;

    printf("Digite o salario fixo:");
    scanf("%f",&salarioFixo);
    fflush(stdin);

    printf("Digite a quantidade de carros vendidos:");
    scanf("%d", &carros);
    fflush(stdin);

    comissFixa = carros * 200;

    printf("Digite o valor total de vendas:");
    scanf("%f", &totalVendas);
    fflush(stdin);

    salarioFinal = salarioFixo + comissFixa + (totalVendas * 0.05);

    printf("O salario final é: %f", salarioFinal);
}