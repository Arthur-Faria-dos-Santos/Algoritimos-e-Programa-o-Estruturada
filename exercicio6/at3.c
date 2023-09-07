#include <stdio.h>
#include <math.h>

int main (){

int cal, prato, sobremesa, bebida;

printf("Escolha seu prato:");
scanf("%d", &prato);

printf("Escolha sua sobremesa:");
scanf("%d", &sobremesa);

printf("Escolha sua bebida:");
scanf("%d", &bebida);

switch (prato){
case 1:
    cal = 180;
    printf("\nVegetariano:%d", cal);
    break;
case 2:
    cal = 230;
    printf("\nPeixe:%d", cal);
    break;
case 3:
    cal = 250;
    printf("\nFrango:%d", cal);
    break;
case 4:
    cal = 350;
    printf("\nCarne:%d", cal);
    break;
default:
    printf("\nSem registro no cardapio");
    break;
}
switch (sobremesa)
{
case 1:
    cal = 75;
    printf("\nAbacaxi:%d", cal);
    break;
case 2:
    cal = 110;
    printf("\nSorvete diet:%d", cal);
    break;
case 3:
    cal = 170;
    printf("\nMouse diet:%d", cal);
    break;
case 4:
    cal = 200;
    printf("\nMouse chocolate:%d", cal);
    break;
default:
    printf("\nSem registro no cardapio");
    break;
}
switch (bebida)
{
case 1:
    cal = 20;
    printf("\nCha:%d", cal);
    break;
case 2:
    cal = 70;
    printf("\nSuco de laranja:%d", cal);
    break;
case 3:
    cal = 100;
    printf("\nSuco de melão:%d", cal);
    break;
case 4:
    cal = 60;
    printf("\nRefrigerante diet:%d", cal);
    break;
default:
    printf("\nSem registro no cardapio");
    break;
}
}