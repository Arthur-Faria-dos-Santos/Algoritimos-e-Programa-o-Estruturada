#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], C[20];

  printf("Digite 10 numeros para o vetor A:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite 10 numeros para o vetor B:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < 10; i++) {
    C[i * 2] = A[i];
    C[2 * i + 1] = B[i];
  }

  printf("O vetor C:");
  for (int i = 0; i < 20; i++) {
    printf("%d\n", C[i]);
  }
}