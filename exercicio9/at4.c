#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    printf("Digite 8 valores inteiros para o vetor:\n");

    for (int i = 0; i < 8; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X (entre 0 e 7): ");
    scanf("%d", &x);

    printf("Digite o valor de Y (entre 0 e 7): ");
    scanf("%d", &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores em X e Y é: %d\n", soma);
    } else {
        printf("X e/ou Y estão fora do intervalo válido (0 a 7).\n");
    }

}