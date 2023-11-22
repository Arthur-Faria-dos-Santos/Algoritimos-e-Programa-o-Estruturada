#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10], C[10], total;

  printf("Digite 10 numeros para o vetor A:\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", &A[i]);
  }
  
  printf("Digite 10 numeros para o vetor B:\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", &B[i]);
  }
  
  for (int i = 0; i < 10; i++){
    C[i] = A[i] - B[i];
    printf("%d - %d = %d\n", A[i], B[i], C[i]);
  }
  for (int i = 0; i < 10; i++){
    total += C[i]; 
  }
  printf("Subtracao total e: %d\n", total);
}