#include <stdio.h>

int main(void) {
  float salario; 

  // salario //
    printf("digite seu salario: R$");
  scanf("%f", &salario);
  if(salario >= 1.320){
  printf("\nvoce recebe um salario minimo ou mais\n\n");
  }
  else{
  printf("\nvoce recebe menos que um salario minimo\n\n");
  }
}