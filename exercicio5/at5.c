#include <stdio.h>
#include <math.h>

// Calcule as raízes da equação de 2º grau.

int main (){

int valorA, valorB, valorC, delta, x1, x2;

printf("Digite o valor de A:");
scanf("%d", &valorA);

printf("Digite o valor de B:");
scanf("%d", &valorB);

printf("Digite o valor de C:");
scanf("%d", &valorC);

delta = (pow(valorB,2)) - (4 * valorA * valorC);

	if(delta < 0){
		printf("Não existe raiz");
	}else if(delta == 0){
		x1 = (valorB + sqrt(delta)) / (2*valorA);
		printf("A raiz é %d", x1);
	}else if(delta > 0){
		x1 = (valorB + sqrt(delta)) / (2*valorA);
		x2 = (valorB - sqrt(delta)) / (2*valorA);
		printf("As raizes são %d e %d", x1, x2);
	}

return 0;
}