#include<stdio.h>

int main(){
    int V[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor inteiro:");
        scanf("%d", &V[i]);
    }
        printf("Valores inseridos:");
    for (int i = 0; i < 6; i++)
    {
        printf("\n%d", V[i]);
    }

}