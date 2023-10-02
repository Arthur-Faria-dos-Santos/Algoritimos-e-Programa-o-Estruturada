#include <stdio.h>
#include <string.h>


#define MAX_JOGADORAS 5
#define MAX_ENTREVISTADOS 300

struct Jogadora {
    char nome[50];
    int votos;
};

int main() {
    struct Jogadora jogadoras[MAX_JOGADORAS];
    char nomes[MAX_JOGADORAS][50] = {"sam kerr - Australia", "alex morgan - Estados Unidos", "Dzsernifer Marozsan - Alemanha", "Amandine Henry - Franca", "Marta Vieira - Brasil"};
    int idade[MAX_ENTREVISTADOS];
    char sexo[MAX_ENTREVISTADOS];
    char voto[MAX_ENTREVISTADOS];

    int num_entrev = 0;

    // Inicializar contadores de votos
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        jogadoras[i].votos = 0;
    }

    while (1) {
        printf("Entrevistado %d:\n", num_entrev + 1);
        printf("Nome: ");
        scanf(" %c[^\n]", nomes[num_entrev]);
        printf("Idade: ");
        scanf("%d", &idade[num_entrev]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[num_entrev]);
        printf("Voto (1-5): ");
        scanf(" %c", &voto[num_entrev]);

        if (voto[num_entrev] < '1' || voto[num_entrev] > '5') {
            printf("Opcao de voto invalida.\n");
            continue;
        }

        // Contabilizar o voto
        int indice_jogadora = voto[num_entrev] - '1';
        jogadoras[indice_jogadora].votos++;

        num_entrev++;

        char continuar;
        printf("Deseja continuar (S/?)? ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    int max_votos = jogadoras[0].votos;
    printf("Resultado da pesquisa:\n");
    printf("Jogadoras e quantidade de votos:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        printf("%s: %d votos\n", nomes[i], jogadoras[i].votos);
        if (jogadoras[i].votos > max_votos) {
            max_votos = jogadoras[i].votos;
        }
    }

    printf("\nJogadoras mais votadas:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        if (jogadoras[i].votos == max_votos) {
            printf("%s\n", nomes[i]);
        }
    }

    printf("\nInformacoes dos entrevistados:\n");
    int mulheres = 0, homens = 0, maiores_idade = 0, menores_idade = 0;
    for (int i = 0; i < num_entrev; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Sexo: %c\n", sexo[i]);
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            homens++;
        } else if (sexo[i] == 'F' || sexo[i] == 'f') {
            mulheres++;
        }
        if (idade[i] >= 18) {
            maiores_idade++;
        } else {
            menores_idade++;
        }
    }

    printf("\nQuantidade de homens: %d\n", homens);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Quantidade de maiores de idade: %d\n", maiores_idade);
    printf("Quantidade de menores de idade: %d\n", menores_idade);

    printf("\nMaiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < num_entrev; i++) {
        if (idade[i] >= 18 && strstr(nomes[i], "Marta Vieira") != NULL) {
            printf("Nome: %s\n", nomes[i]);
        }
    }

    return 0;
}