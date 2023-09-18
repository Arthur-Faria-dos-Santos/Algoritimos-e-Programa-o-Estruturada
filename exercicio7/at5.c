#include <stdio.h>

main(){
  //Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 

  	int contador, soma = 0;
	printf("Os Primeiros 50 Numeros Pares sao:\n\n");

	for(contador = 1; contador <= 100; contador ++){
		if(contador %2 == 0){
			printf("%d ", contador);
			soma += contador;
		}
	}

	printf("\n\nA soma dos 50 primeiros numeros pares e: %d", soma);
}