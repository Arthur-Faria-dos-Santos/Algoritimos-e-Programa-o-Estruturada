#include<stdio.h>
#include<math.h>

int main(){
  int A[5], codigo;

  printf("Digite 5 numeros\n");
    
  for(int i = 0; i<5; i++){
    scanf("%d", &A[i]);
  }

  printf("Digite o comando desejado:\n1 - Ordem direta\n2 - Ordem inversa\n0 - Sair\n");
  scanf("%d", &codigo);

  switch(codigo){
    case 1:
      for(int i = 0; i<5; i++){
        printf("\n%d", A[i]);
      }
      break;
    case 2:
      for(int i = 4; i>=0; i--){
        printf("\n%d", A[i]);
      }
      break;
    case 0:
      printf("\nFinalizando");
      break;
    default:
      printf("\nComando invalido");
      break;
  }
}