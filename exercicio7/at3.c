#include <stdio.h>

int main() {
    int N, numImpar = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("%d\n", numImpar);
        numImpar += 2;
    }
}
