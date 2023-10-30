#include <stdio.h>

int main() {
    int array[10];
    int i, j;


    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int temIguais = 0; 


    printf("Valores iguais: ");
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (array[i] == array[j]) {
                if (temIguais) {
                    printf(", ");
                }
                printf("%d", array[i]);
                temIguais = 1;
            }
        }
    }

    if (!temIguais) {
        printf("Nenhum valor igual encontrado.");
    }

    printf("\n");

    return 0;
}
