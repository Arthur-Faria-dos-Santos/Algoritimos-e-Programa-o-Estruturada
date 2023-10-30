#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

void somarColunasMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        int soma = 0;
        for (int i = 0; i < LINHAS - 1; i++) {
            soma += matriz[i][j];
        }
        matriz[LINHAS - 1][j] = soma; // Armazena a soma na 61ª linha da respectiva coluna
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencher a matriz com valores fictícios para exemplificação
    int contador = 1;
    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = contador++;
        }
    }

    // Chama a função para somar as colunas
    somarColunasMatriz(matriz);

    // Exibe a matriz com os valores somados na 61ª linha
    printf("Matriz após a soma das colunas:\n");
    imprimirMatriz(matriz);

    return 0;
}
