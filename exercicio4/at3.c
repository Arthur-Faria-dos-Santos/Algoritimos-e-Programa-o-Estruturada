#include <stdio.h>
#include <math.h>

//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior). //

int main (){
  float numeA, numeB, numeC, numeD;

  printf("digite o valor de A:");
  fflush(stdin);
  scanf("%f", &numeA);
  
  printf("digite o valor de B:");
  fflush(stdin);
  scanf("%f", &numeB);
  
  printf("digite o valor de C:");
  fflush(stdin);
  scanf("%f", &numeC);

  if ((numeA < numeB) && (numeA < numeC) && (numeA < numeD)){
  printf("\nA e numero MENOR:%.2f", numeA);
  }

  if ((numeB < numeA) && (numeB < numeC) && (numeB < numeD)){
  printf("\nB e numero MENOR:%.2f", numeB);
  }

  if ((numeC < numeA) && (numeC < numeB) && (numeC < numeD)){
  printf("\nC e numero MENOR:%.2f", numeC);
  }

  if ((numeA > numeB) && (numeA > numeC) && (numeA > numeD)){
    printf("A e numero maior:%.2f", numeA);
  };
  
  if ((numeB > numeA) && (numeB > numeC) && (numeB > numeD)){
    printf("B e numero maior:%.2f", numeB);
  };
  
  if ((numeC > numeA) && (numeC > numeB) && (numeC > numeD)){
    printf("C e numero maior:%.2f", numeC);
  };
  

  return 0;
}