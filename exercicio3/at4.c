#include <stdio.h>

int main(void) {
  float peso;

  // peso //
  printf("digite seu peso:");
  scanf("%f", &peso);
    if(peso < 60.0){
  printf("\nSeu peso:%.2f", peso);
  }
}