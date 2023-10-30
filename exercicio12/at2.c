#include <stdio.h>

void calcularLocacoesGratuitas(int A[], int locacoesGratis[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoesGratis[i] = A[i] / 15;  // Calcula a quantidade de locações grátis para cada cliente
    }
}

int main() {
    int filmesRetirados[500];  // Vetor com a quantidade de filmes retirados por cliente
    int locacoesGratis[500];   // Vetor para armazenar a quantidade de locações gratuitas por cliente

    // Aqui seria o código para preencher o vetor filmesRetirados com os valores...

    // Exemplo: Preenchendo aleatoriamente para simulação
    for (int i = 0; i < 500; i++) {
        filmesRetirados[i] = rand() % 100; // Números aleatórios para simular a quantidade de filmes retirados
    }

    calcularLocacoesGratuitas(filmesRetirados, locacoesGratis, 500);

    // Exibindo as locações gratuitas para cada cliente
    for (int i = 0; i < 500; i++) {
        printf("Cliente %d tem direito a %d locações gratuitas.\n", i + 1, locacoesGratis[i]);
    }

    return 0;
}
