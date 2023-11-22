#include<stdio.h>
#include<math.h>

int main(){
  int A[10], codigo;

  printf("Digite 10 numeros\n");
    
  for(int i = 0; i<10; i++){
    scanf("%d", &A[i]);
  }
  
  for(int i = 0; i<10; i++){
    if(A[i] < 0){
      A[i] = 0;
    }
    printf("\n%d", A[i]);
  }
}