#include <stdio.h>
#include <math.h>

//Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. //

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
  
  printf("digite o valor de D:");
  fflush(stdin);
  scanf("%f", &numeD);

  if ((numeA > numeB) && (numeA > numeC) && (numeA > numeD)){
    printf("A e numero maior:%.2f", numeA);
  };
  
  if ((numeB > numeA) && (numeB > numeC) && (numeB > numeD)){
    printf("B e numero maior:%.2f", numeB);
  };
  
  if ((numeC > numeA) && (numeC > numeB) && (numeC > numeD)){
    printf("C e numero maior:%.2f", numeC);
  };
  
  if ((numeD > numeA) && (numeD > numeB) && (numeD > numeC)){
    printf("D e numero maior:%.2f", numeD);
  };
  
  if ((numeA < numeB) && (numeA < numeC) && (numeA < numeD)){
  printf("\nA e numero MENOR:%.2f", numeA);
  }

  if ((numeB < numeA) && (numeB < numeC) && (numeB < numeD)){
  printf("\nB e numero MENOR:%.2f", numeB);
  }

  if ((numeC < numeA) && (numeC < numeB) && (numeC < numeD)){
  printf("\nC e numero MENOR:%.2f", numeC);
  }

  if ((numeD < numeA) && (numeD < numeB) && (numeD < numeC)){
  printf("\nD e numero MENOR:%.2f", numeD);
  }

  return 0;
}