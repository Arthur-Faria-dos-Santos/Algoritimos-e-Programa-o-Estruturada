#include <stdio.h>

int main(void) {
  float altura;

  // altura //
  printf("digite sua altura:");
  scanf("%f", &altura);
    if(altura >= 1.80){
  printf("\nvoce tem 1.80 de altura ou mais\n\n");
  }
  else{
  printf("\nvoce tem menos de 1.80 de altura\n\n");
}
}