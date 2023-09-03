#include <stdio.h>
#include <math.h>

// Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.//

int main (){
  float numero, raiz, quadra;

  printf("Digite um numero:");
  scanf("%f", &numero);

  if (numero >= 0){
    raiz = sqrt(numero);
    printf("Seu resultado e %f", raiz);
  }
  else {
    quadra = pow (numero, 2);
    printf("seu numero e %f", quadra);
  }

}