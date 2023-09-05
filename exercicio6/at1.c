#include <stdio.h>
#include <math.h>

main (){

int DDD;

printf("Digite seu DDD:");
scanf("%d", &DDD);
switch (DDD)
{
case 61:
    printf("Brasilia");
    break;
case 71:
    printf("Salvador");
    break;
case 11:
    printf("Sao Paulo");
    break;
case 21:
    printf("Rio de Janeiro");
    break;
case 32:
    printf("Juiz de fora");
    break;
case 19:
    printf("Campinas");
    break;
case 27:
    printf("Vitoria");
    break;
case 31:
    printf("Belo Horizonte");
    break;


default:
    printf("uma cidade no Brasil sem identificacao");
    break;
}

return 0;
}