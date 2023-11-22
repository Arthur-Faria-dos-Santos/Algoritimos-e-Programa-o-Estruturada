#include <math.h>
#include <stdio.h>

int main() {
  int A[5], B[5], C = 0;

  printf("Digite 5 numeros para primeiro conjunto:\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite 5 numeros para o segundo conjunto:\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &B[i]);
  }
  
  for (int i = 0; i < 5; i++){
    printf("Conjunto A: %d, conjunto B:%d\n", A[i], B[i]);
  }
  
  for (int i = 0; i < 5; i++) {
    do {
      C += (A[i] * B[i]);
    } while (i > 4);
  }
  printf("Produto escalar: %d", C);
}
