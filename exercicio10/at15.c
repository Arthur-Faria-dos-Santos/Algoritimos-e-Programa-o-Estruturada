#include<stdio.h>
#include<math.h>

int main(){
  int A[20];

  printf("Digite 20 numeros\n");
    
  for(int i = 0; i<20; i++){
    scanf("%d", &A[i]);
  }

  int j = 0;
  
  for(int i = 0; i<20; i++){
    if(A[j] != A[i+1]){
      printf("\n%d", A[i]);
      j++;
    }
  }
}