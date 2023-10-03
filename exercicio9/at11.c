#include <stdio.h>

int main() {
    int tamanho = 10;
    double vetor[tamanho];
    int quantidadeNegativos = 0;
    double somaPositivos = 0.0;

    printf("Digite 10 numeros reais:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &vetor[i]);

        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);

    printf("Soma dos numeros positivos: %.2lf\n", somaPositivos);

    return 0;
}