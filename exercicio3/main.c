#include <stdio.h>

int main(void) {
  int idade;
  float salario; 
  float altura;
  float peso;

  // idade //
  printf("digite sua idade:");
  scanf("%d", &idade);
  if(idade >= 18){
  printf("\nvoce e maior de idade\n\n");
  }
  else{
  printf("\nvoce e menor de idade\n\n");
  }

  // salario //
    printf("digite seu salario: R$");
  scanf("%f", &salario);
    if(salario >= 1320){
  printf("\nvoce recebe um salario minimo ou mais\n\n");
  }
  else{
  printf("\nvoce recebe menos que um salario minimo\n\n");
  }

  // altura //
  printf("digite sua altura:");
  scanf("%f", &altura);
    if(altura >= 1.80){
  printf("\nvoce tem 1.80 de altura ou mais\n\n");
  }
  else{
  printf("\nvoce tem menos de 1.80 de altura\n\n");
}

  // peso //
  printf("digite seu peso:");
  scanf("%f", &peso);
    if(altura < 60.0){
  printf("\nSeu peso:%.2f", peso);
  }

}