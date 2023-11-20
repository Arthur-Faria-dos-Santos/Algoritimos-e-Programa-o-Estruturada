#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct No {
    Produto produto;
    struct No* proximo;
} No;

typedef struct {
    No* inicio;
} ListaEstoque;

void inicializaLista(ListaEstoque* lista) {
    lista->inicio = NULL;
}

void adicionaProduto(ListaEstoque* lista) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    printf("Digite o código do produto: ");
    scanf("%d", &novoNo->produto.codigo);

    printf("Digite a descrição do produto: ");
    scanf("%s", novoNo->produto.descricao);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &novoNo->produto.quantidade);

    printf("Digite o valor do produto: ");
    scanf("%f", &novoNo->produto.valor);

    novoNo->proximo = lista->inicio;
    lista->inicio = novoNo;

    printf("Produto adicionado com sucesso.\n");
}

void geraRelatorio(ListaEstoque* lista) {
    No* atual = lista->inicio;

    printf("Relatório de Estoque:\n");

    while (atual != NULL) {
        printf("Código: %d | Descrição: %s | Quantidade: %d | Valor: R$ %.2f\n",
               atual->produto.codigo, atual->produto.descricao,
               atual->produto.quantidade, atual->produto.valor);

        atual = atual->proximo;
    }
}

void pesquisaProduto(ListaEstoque* lista) {
    int codigoPesquisa;
    printf("Digite o código do produto a ser pesquisado: ");
    scanf("%d", &codigoPesquisa);

    No* atual = lista->inicio;

    while (atual != NULL) {
        if (atual->produto.codigo == codigoPesquisa) {
            printf("Produto encontrado:\n");
            printf("Código: %d | Descrição: %s | Quantidade: %d | Valor: R$ %.2f\n",
                   atual->produto.codigo, atual->produto.descricao,
                   atual->produto.quantidade, atual->produto.valor);
            return;
        }

        atual = atual->proximo;
    }

    printf("Produto não encontrado.\n");
}

void removeProduto(ListaEstoque* lista) {
    int codigoRemocao;
    printf("Digite o código do produto a ser removido: ");
    scanf("%d", &codigoRemocao);

    No* atual = lista->inicio;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->produto.codigo == codigoRemocao) {
            if (anterior == NULL) {
                lista->inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            free(atual);
            printf("Produto removido com sucesso.\n");
            return;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    printf("Produto não encontrado.\n");
}

int main() {
    ListaEstoque estoque;
    inicializaLista(&estoque);

    int opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1 == Adicionar Produto\n");
        printf("2 == Gerar Relatório\n");
        printf("3 == Pesquisar Produto\n");
        printf("4 == Remover Produto\n");
        printf("0 == Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionaProduto(&estoque);
                break;
            case 2:
                geraRelatorio(&estoque);
                break;
            case 3:
                pesquisaProduto(&estoque);
                break;
            case 4:
                removeProduto(&estoque);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
