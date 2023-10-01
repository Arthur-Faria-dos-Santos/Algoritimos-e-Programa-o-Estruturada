#include <stdio.h>

int main() {
    float soma_salario = 0;
    int soma_filhos = 0;
    float maior_salario = 0;
    int contador = 0;
    int percent_100 = 0;
    float salario;

    do {
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        int numero_filhos;
        printf("Digite o número de filhos: ");
        scanf("%d", &numero_filhos);

        soma_salario += salario;
        soma_filhos += numero_filhos;
        contador++;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100) {
            percent_100++;
        }

    } while (1);


    float media_salario = soma_salario / contador;
    float media_filhos = (float)soma_filhos / contador;

    printf("\nMedia do salario da populacao: R$%.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Maior salario: R$%.2f\n", maior_salario);
    printf("Percentual de pessoas com salario até R$100,00: %.2f%%\n", ((float)percent_100 / contador) * 100);

    return 0;
}
