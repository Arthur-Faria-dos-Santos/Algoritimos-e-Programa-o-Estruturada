#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    int termo_atual = 0;
    int termo_anterior = 1;
    int resultado = 0;

    if (n == 0) {
        resultado = 0;
    } else if (n == 1) {
        resultado = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            resultado = termo_atual + termo_anterior;
            termo_anterior = termo_atual;
            termo_atual = resultado;
        }
    }

    printf("O %d termo da sequencia de Fibonacci é: %d\n", n, resultado);

    return 0;
}
