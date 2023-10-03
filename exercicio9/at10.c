#include<stdio.h>

int main(){
    int contador = 0;
    int soma = 0, v[15];
    float media_geral;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite sua nota:");
        scanf("%d", &v[i]);
        contador++;
        soma += v[i];
    }
    media_geral = soma / contador;
    printf("Media geral: %.2f", media_geral);
}