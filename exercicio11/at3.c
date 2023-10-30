#include <stdio.h>

float converterCelcius(float valorF);

main(){
    float valorF, valorC;
    printf("Digite o valor em Fahrenheit");
    scanf("%f", valorF);

    valorC = converterCelcius(valorF);

    printf("%f", valorC);
}
float converterCelcius(float valorF){
    float celcius = (valorF - 32.0) * (5.0/9.0);
    return celcius;
}