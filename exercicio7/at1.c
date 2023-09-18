#include <stdio.h>

main(){
  
  //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 

 int numero, inicio = 0; 
 printf("Digite um numero inteiro:");
 scanf ("%d", &numero);
 
do { 
 printf("%d\n" , inicio); 
inicio = inicio + 1; 
} while (inicio <= numero); 
  }