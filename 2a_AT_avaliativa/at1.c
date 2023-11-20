#include <stdio.h>
#include <locale.h>

int validaQuantidade(int quantidade) {
    if (quantidade >= 0) {
        return quantidade;
    } else {
        printf("Quantidade invalida. Digite novamente: ");
        return validaQuantidade(quantidade);
    }
}

float calculaSalario(int quantidade) {
    const float salario_inicial = 600.0;
    const float adc_50 = 0.5;
    const float adc_80 = 0.75;

    if (quantidade <= 50) {
        return salario_inicial;
    } else if (quantidade <= 80) {
        return salario_inicial + (quantidade - 50) * adc_50;
    } else {
        return salario_inicial + 30 * adc_50 + (quantidade - 80) * adc_80;
    }
}

void mostraFinal(char nome[100], float salario) {
    printf("O funcionario %s recebera um salario de R$ %.2f\n", nome, salario);
}

int main() {
    char nome[100];
    int quantidadePecas;

    while (1) {
        printf("Digite o nome do funcionario (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break;
        }

        printf("Digite a quantidade de pecas fabricadas por %s: ", nome);
        scanf("%d", &quantidadePecas);

        int quantidadeValidada = validaQuantidade(quantidadePecas);
        float salarioTotal = calculaSalario(quantidadeValidada);
        mostraFinal(nome, salarioTotal);
    }

    return 0;
}


