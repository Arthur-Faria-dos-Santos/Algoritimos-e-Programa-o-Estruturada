#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulos = 0, branco = 0;
    int voto;

    while (1) {
        printf("Digite o codigo do voto (1, 2, 3, 4, 5, 6, ou 0 para encerrar): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulos++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf("Codigo de voto inválido.\n");
        }
    }
    printf("\n\nTotal de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", nulos);
    printf("Total de votos em branco: %d\n", branco);

    return 0;
}
