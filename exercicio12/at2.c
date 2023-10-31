#include <stdio.h>

void calcularLocacoesGratuitas(int A[], int locGratis[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locGratis[i] = A[i] / 15;  
    }
}

int main() {
    int filmR[500];  
    int locGratis[500];  

    for (int i = 0; i < 500; i++) {
        filmR[i] = rand() % 100;
    }

    calcularLocacoesGratuitas(filmR, locGratis, 500);

    for (int i = 0; i < 500; i++) {
        printf("Cliente %d tem direito a %d locacoes gratuitas.\n", i + 1, locGratis[i]);
    }

    return 0;
}
