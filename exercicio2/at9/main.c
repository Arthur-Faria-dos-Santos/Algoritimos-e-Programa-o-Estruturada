#include <stdio.h>

int main() {

    float salarioAtual, porcentagemReajuste, novoSalario;

    printf("Digite o salario atual:");
    scanf("%f",&salarioAtual);
    fflush(stdin);

    printf("Digite a porcentagem de reajuste:");
    scanf("%f", &porcentagemReajuste);
    fflush(stdin);

    novoSalario = salarioAtual + ((porcentagemReajuste / 100)* salarioAtual);

    printf("O salario atual é: %f", novoSalario);
}