#include <math.h>
#include <stdio.h>

int main() {
  int A[10];
  float B[10];

  printf("Digite o numero do aluno e sua altura:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%d, %f", &A[i], &B[i]);
  }

  float maiorAltura = 0;
  int numeroMaior = 0;
  for (int i = 0; i < 10; i++) {
    if (B[i] > maiorAltura) {
      maiorAltura = B[i];
      numeroMaior = A[i];
    }
  }

  float menorAltura = 0;
  int numeroMenor = 0;
  for (int i = 0; i < 10; i++) {
    if (B[i] < menorAltura) {
      menorAltura = B[i];
      numeroMenor = A[i];
    }
  }

  printf("O aluno mais alto e o %d com %.2f metros\n", numeroMaior,
         maiorAltura);
  printf("O aluno menor e o %d com %.2f metros\n", numeroMenor, menorAltura);
}
