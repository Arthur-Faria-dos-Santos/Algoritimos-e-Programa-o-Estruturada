#include <math.h>
#include <stdio.h>

int main() {
  int A[10], B[10];
  float total = 0, media, raiz = 0;
  float mediaB, totalB = 0;

  printf("Digite os 10 elementos do conjunto:\n");
  
  for(int i = 0; i < 10; i++){
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < 10; i++){
    total += A[i];
  }
  
  media = total / 10;
  
  for(int i = 0; i < 10; i++){
    A[i] = A[i] - media;
    B[i] = pow(A[i], 2);
    totalB += B[i];
  }
  
  mediaB = totalB / 10;
  
  raiz = sqrt(mediaB);
  
  printf("O desvio padrao do conjunto e: %.2f", raiz);
}
