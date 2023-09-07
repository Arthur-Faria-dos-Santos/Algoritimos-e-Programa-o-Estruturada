#include <stdio.h>
#include <math.h>

int main (){

int codP, quant;
float valorP;

printf("Digite o codigo do produto:");
scanf("%d", &codP);

printf("Digite a quantidade:");
scanf("%d", &quant);

switch (codP){
case 100:
    valorP = 10.10 * quant;
    printf("Valor total:%.2f", valorP);
    break;
case 101:
    valorP = 8.30 * quant;
    printf("Valor total:%.2f", valorP);
    break;
case 102:
    valorP = 8.50 * quant;
    printf("Valor total:%.2f", valorP);
    break;
case 103:
    valorP = 12.50 * quant;
    printf("Valor total:%.2f", valorP);
    break;
case 104:
    valorP = 13.25 * quant;
    printf("Valor total:%.2f", valorP);
    break;         
default:
    printf("Nao existe no cardapio");
    break;
}

return 0;
}   