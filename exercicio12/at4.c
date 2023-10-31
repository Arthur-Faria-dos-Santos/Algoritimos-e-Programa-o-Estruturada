#include <stdio.h>
#define LINHAS 61
#define COLUNAS 10

void somarColunasMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        int soma = 0;
        for (int i = 0; i < LINHAS - 1; i++) {
            soma += matriz[i][j];
        }
        matriz[LINHAS - 1][j] = soma;
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

    int contador = 1;
    for (int i = 0; i < LINHAS - 1; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = contador++;
        }
    }
    somarColunasMatriz(matriz);

    printf("Matriz após a soma das colunas:\n");
    imprimirMatriz(matriz);

    return 0;
}
