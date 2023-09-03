#include <stdio.h>

main (){
    int numero1, numero2, soma, multi, sub;
    float div;
    printf("Digite dois numeros");
    scanf("%d %d" , &numero1, &numero2);

    soma = numero1 + numero2;
    multi = numero1 * numero2;
    sub = numero1 - numero2;
    div = numero1 / numero2;

    printf("soma: %d, \nMultiplicacao: %d, \nSubtracao: %d, \nDivisao: %.2f",soma, multi, sub, div);
}