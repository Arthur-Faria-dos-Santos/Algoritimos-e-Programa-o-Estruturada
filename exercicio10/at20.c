#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], confirmador = 0;

  printf("Digite 10 numeros entre 0 a 50:\n");

  for (int i = 0; i < 10; i++) {
    do {
      scanf("%d", &A[i]);
      if (A[i] < 0 || A[i] > 50) {
        printf("Numero invalido: %d\nComece do inicio:", A[i]);
      }
    } while (A[i] < 0 || A[i] > 50);
  }

  int j = 0;

  for (int i = 0; i < 10; i++) {
    if (A[i] % 2 != 0) {
      B[j] = A[i];
      j++;
    }
  }
  for (int i = 0; i < 10; i++) {
    if (i < j) {
      printf("Primeiro vetor: %d, Segundo vetor: %d\n", A[i], B[i]);
    } else {
      printf("Primeiro vetor: %d\n", A[i]);
    }
  }
}