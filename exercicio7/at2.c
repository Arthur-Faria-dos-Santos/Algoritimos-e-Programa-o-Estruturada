#include <stdio.h>

main(){
  //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

int numero;
printf("Digite um numero inteiro:");
scanf ("%d", &numero);

for(numero; numero >= 1; numero--);{ 
 printf("\n%d ", numero); 
  }
}