#include <stdio.h>

int main() {
    int tamanho = 5;
    int valores[tamanho];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        } else {

            if (valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if (valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

    printf("Posicao do maior valor: %d\n", posicaoMaior);
    printf("Posicao do menor valor: %d\n", posicaoMenor);

    return 0;
}