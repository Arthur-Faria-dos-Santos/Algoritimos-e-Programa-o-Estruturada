#include<stdio.h>
#include<math.h>

int main(){
float valor1, valor2, valor3;

printf("Digite o valor de A:\n");
scanf("%f", &valor1);

printf("Digite o valor de B:\n");
scanf("%f", &valor2);

printf("Digite o valor de C:\n");
scanf("%f", &valor3);

if (valor1 <= 0 || valor2 <= 0 || valor3 <= 0)
{
    printf("\nNao reconhecido como triangulo");
}
else{
    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
    {
        printf("\nReconhecido como triangulo escaleno");

    }else if (valor1 == valor2 && valor1 == valor3 && valor2 == valor3)
    {
        printf("\nReconhecido como triangulo equilatero");

    }else {
        printf("\nReconhecido como triangulo isoceles");
    }
}

}