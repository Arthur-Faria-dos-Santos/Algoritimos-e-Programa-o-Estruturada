#include <stdio.h>

int main() {
    int tamanho = 5;
    int valores[tamanho];
    int maior, menor;
    int media = 0;


    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        } else {

            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }
    }
    printf("Valores digitados:  ");
    for (int i = 0; i < 5; i++)
    {
    printf("%d  ", valores[i]);
    }
    printf("Posicao do maior valor: %d\n", maior);
    printf("Posicao do menor valor: %d\n", menor);
    for (int i = 0; i < tamanho; i++) {
        media += valores[i];
        }
    media /= tamanho;

    printf("Media total:  %d", media);

}