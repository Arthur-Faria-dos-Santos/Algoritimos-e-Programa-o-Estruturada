#include <stdio.h>

int main() {
    int v[10], pares[10], contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0) { 
            pares[contador] = v[i];
            contador++;
        }
    }

    printf("Numeros pares: ");
    for (int i = 0; i < contador; i++) {
        printf("%d ", pares[i]);
    }
    printf("\nTotal de numeros pares: %d\n", contador);

}
