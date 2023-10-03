#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicao;

    printf("Digite 10 valores inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);


        if (i == 0) {
            maior = vetor[i];
            posicao = i;
        } else {

            if (vetor[i] > maior) {
                maior = vetor[i];
                posicao = i;
            }
        }
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("Ele está na posição: %d\n", posicao);

    return 0;
}