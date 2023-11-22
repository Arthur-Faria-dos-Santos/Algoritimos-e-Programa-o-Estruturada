#include<stdio.h>
#include<math.h>

int main(){
  int A[10], multiplos[10];

  printf("Digite 10 numeros\n");
    
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  int x;
  printf("Digite uma posicao de 0 a 9\n");
  scanf("%d", &x);

  for(int i = 0; i < x; i++){
    multiplos[i] = A[i] * A[x];
    printf("Os multiplos sao:%d\n", multiplos[i]);
  }
}