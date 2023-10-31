#include <stdio.h>

#define TAMANHO 10

void trocarLinhas(int A[TAMANHO][TAMANHO], int linha1, int linha2) {
    for (int j = 0; j < TAMANHO; j++) {
        int temp = A[linha1][j];
        A[linha1][j] = A[linha2][j];
        A[linha2][j] = temp;
    }
}

void trocarColunas(int A[TAMANHO][TAMANHO], int coluna1, int coluna2) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = A[i][coluna1];
        A[i][coluna1] = A[i][coluna2];
        A[i][coluna2] = temp;
    }
}

void trocarDiagonais(int A[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][TAMANHO - 1 - i];
        A[i][TAMANHO - 1 - i] = temp;
    }
}

void trocarLinhaColuna(int A[TAMANHO][TAMANHO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO; i++) {
        int temp = A[linha][i];
        A[linha][i] = A[i][coluna];
        A[i][coluna] = temp;
    }
}

void imprimirMatriz(int A[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[10][10];

    int contador = 1;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = contador++;
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    trocarLinhas(matriz, 1, 7);
    trocarColunas(matriz, 3, 9);
    trocarDiagonais(matriz);
    trocarLinhaColuna(matriz, 4, 9);

    printf("\nMatriz após as trocas:\n");
    imprimirMatriz(matriz);

    return 0;
}
