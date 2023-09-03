#include <stdio.h>

int main() {

    int anos, meses, dias, idade;

    printf ("digite quantos anos voce tem:");
    scanf("%d", &anos);
    fflush(stdin);

    printf ("\ndigite quantos meses:");
    scanf("%d", &meses);
    fflush(stdin);

    printf ("\ndigite quantos dias:");
    scanf ("%d", &dias);
    fflush(stdin);


    idade = (anos * 365) + (meses * 30) + dias;

    printf("Sua idade em dias é: %d", idade);
}