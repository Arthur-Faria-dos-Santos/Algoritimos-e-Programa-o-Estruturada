#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_habitantes = 0;
    int total_mulheres_castanhas = 0;

    while (1) {
        printf("Digite o sexo (m ou f) do habitante (-1 para encerrar): ");
        scanf(" %c", &sexo);

        if (sexo == 'f' || sexo == 'm') {
            if (sexo == 'f') {
                printf("Digite a idade da mulher: ");
                scanf("%d", &idade);

                if (idade >= 18 && idade <= 35) {
                    printf("Digite a cor dos olhos (a, v, c ou p): ");
                    scanf(" %c", &olhos);

                    printf("Digite a cor dos cabelos (l, c, p ou r): ");
                    scanf(" %c", &cabelos);

                    printf("Digite o salário: ");
                    scanf("%f", &salario);

                    if (olhos == 'c' && cabelos == 'c' && salario >= 0) {
                        total_mulheres_castanhas++;
                    }
                }
            }

            total_habitantes++;

            if (idade == -1) {
                break;
            }
        } else {
            printf("Entrada inválida. Tente novamente.\n");
        }
    }

    if (total_habitantes > 0) {
        float porcentagem = (float)(total_mulheres_castanhas * 100) / total_habitantes;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante cadastrado.\n");
    }

    return 0;
}

