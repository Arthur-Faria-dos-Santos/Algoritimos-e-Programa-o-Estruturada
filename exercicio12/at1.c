#include <stdio.h>

void imprimirOpcoesPagamento() {
    printf("Opções de pagamento:\n");
    printf("1) A vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês sobre o valor de cada prestação (somente para compras acima de R$ 100,00).\n");
}

int solicitarOpcao() {
    int opcao;
    printf("Escolha a opção de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcao);
    return opcao;
}

void opcaoAVista(float total) {
    float totalComDesconto = total - (total * 0.1);
    printf("Valor total a vista com desconto: R$ %.2f\n", totalComDesconto);
}

void opcaoDuasVezes(float total) {
    printf("Valor total em duas vezes (preço da etiqueta): R$ %.2f em duas parcelas de R$ %.2f\n", total, total / 2);
}

void opcaoParcelado(float total) {
    int parcelas;
    float valorParcela;

    if (total > 100) {
        printf("Escolha a quantidade de parcelas (3 a 10): ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10) {
            valorParcela = total / parcelas * 1.03; // Adiciona 3% de juros ao valor de cada prestação
            printf("Valor total parcelado em %d vezes com juros: R$ %.2f em %d parcelas de R$ %.2f\n", parcelas, total * 1.03, parcelas, valorParcela);
        } else {
            printf("Número de parcelas inválido.\n");
        }
    } else {
        printf("Esta opção é válida somente para compras acima de R$ 100,00.\n");
    }
}

int main() {
    float totalGasto;
    int opcao;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    imprimirOpcoesPagamento();
    opcao = solicitarOpcao();

    switch (opcao) {
        case 1:
            opcaoAVista(totalGasto);
            break;
        case 2:
            opcaoDuasVezes(totalGasto);
            break;
        case 3:
            opcaoParcelado(totalGasto);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
