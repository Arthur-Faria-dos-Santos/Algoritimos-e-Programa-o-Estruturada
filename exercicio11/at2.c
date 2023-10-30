#include <stdio.h>

void MesEDias(int numero);

int main() {
    int numero;

    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);

    MesEDias(numero);

    return 0;
}

void MesEDias(int numero) {
    if (numero < 1 || numero > 12) {
        printf("Número fora do intervalo válido (1 a 12).\n");
    } else {
        const char *meses[] = {
            "janeiro", "fevereiro", "março", "abril", "maio", "junho",
            "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
        };
        
        const int diasNoMes[] = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };
        
        printf("Mês: %s\n", meses[numero - 1]);
        printf("Quantidade de dias: %d\n", diasNoMes[numero - 1]);
    }
}