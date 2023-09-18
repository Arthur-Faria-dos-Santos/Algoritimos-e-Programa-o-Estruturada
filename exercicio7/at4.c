#include <stdio.h>

main(){

  //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

  int N;

  for(N = 3; N > 0 ; N +=3){
    if (N <= 15)
    {
    printf("\n%d", N);
    }
  }
}