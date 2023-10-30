#include <stdio.h>

int main() {
    int valores[6];
    int contador = 0;

    printf("Digite 6 valores inteiros pares:\n");

    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);


        if (valores[i] % 2 == 0) {
            contador++;
        } else {
            printf("O valor digitado não é par. Tente novamente.\n");
            i--;
        }
    }

    if (contador == 6) {

        printf("Valores lidos na ordem inversa:\n");

        for (int i = 5; i >= 0; i--) {
            printf("%d\n", valores[i]);
        }
    } else {
        printf("Não foram digitados 6 valores inteiros pares.\n");
    }

}