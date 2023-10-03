#include<stdio.h>

int main(){
    float v[10], qrado[10];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor:");
        scanf("%f", &v[i]);
        qrado[i] = v[i] * v[i];
    }

        printf("Valores inseridos:");
    for (int i = 0; i < 6; i++)
    {
        printf("\n%.2f  %.2f", v[i], qrado[i]);
    }
}