#include <stdio.h>

int main() {
    int vetor[10];
    int maior, menor;

    printf("Digite 10 valores inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);


        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {

            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}