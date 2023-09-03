#include <stdio.h>

int main(void) {
  int idade;

  // idade //
  printf("digite sua idade:");
  scanf("%d", &idade);
  if(idade >= 18){
  printf("\nvoce e maior de idade\n\n");
  }
  else{
  printf("\nvoce e menor de idade\n\n");
  }
}