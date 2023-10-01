#include <stdio.h>
#include <string.h>

int main() {
    int codigo_cidade, num_veiculos, num_acidentes, maior_acidente = -1, menor_acidente = -1, codigo_maior_acidente, codigo_menor_acidente, total_veiculos = 0, total_acidentes_rs = 0, num_cidades_rs = 0;
    char estado[3];

    for (int i = 1; i <= 200; i++) {
        printf("Cidade %d:\n", i);
        
        printf("Código da cidade: ");
        scanf("%d", &codigo_cidade);

        if (codigo_cidade == 0) {
            break;
        }
        
        printf("Estado: ");
        scanf("%s", estado);

        printf("Número de veículos de passeio (em 1992): ");
        scanf("%d", &num_veiculos);

        printf("Número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &num_acidentes);

        total_veiculos += num_veiculos;

        if (strcmp(estado, "RS") == 0) {
            total_acidentes_rs += num_acidentes;
            num_cidades_rs++;
        }

        if (maior_acidente == -1 || num_acidentes > maior_acidente) {
            maior_acidente = num_acidentes;
            codigo_maior_acidente = codigo_cidade;
        }

        if (menor_acidente == -1 || num_acidentes < menor_acidente) {
            menor_acidente = num_acidentes;
            codigo_menor_acidente = codigo_cidade;
        }
    }

    if (num_cidades_rs > 0) {
        float media_acidentes_rs = (float)total_acidentes_rs / num_cidades_rs;
        printf("Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", media_acidentes_rs);
    } else {
        printf("Nenhuma cidade do Rio Grande do Sul foi encontrada.\n");
    }

    if (maior_acidente != -1 && menor_acidente != -1) {
        printf("Maior índice de acidentes de trânsito: %d (Cidade %d)\n", maior_acidente, codigo_maior_acidente);
        printf("Menor índice de acidentes de trânsito: %d (Cidade %d)\n", menor_acidente, codigo_menor_acidente);
    } else {
        printf("Nenhum dado válido foi inserido.\n");
    }

    if (total_veiculos > 0) {
        float media_veiculos = (float)total_veiculos / 200;
        printf("Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);
    } else {
        printf("Nenhum dado válido foi inserido.\n");
    }

    return 0;
}
