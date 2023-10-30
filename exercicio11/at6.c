#include <stdio.h>

float calculaImc(float peso, float altura);
main(){
    float altura, peso, imc;
    printf("digite o peso e a altura");
    scanf("%f %f", &peso, &altura);

    imc = calculaImc(peso, altura);

    if(imc < 16){
    printf("Abaixo do peso: %.2f", imc);
    }else if(16 >= 16 && imc < 25){
    printf("Peso normal: %.2f", imc);
    }else{
    printf("Acima do peso: %.2f", imc);
    }
}

float calculaImc(float peso, float altura){
    float imc = peso / (altura * altura);
    return imc;
}
