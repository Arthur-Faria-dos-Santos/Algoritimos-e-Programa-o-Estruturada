#include <stdio.h>

int main() {
    int aluno, quant_alunos = 1;
    float media, n1, n2, n3, media_total,calc_media, medias[30];

    for (aluno = 0; aluno < 30; aluno++) {
        printf("Informe as notas do aluno %d:\n", aluno + 1);

        printf("Nota 1: ");
        scanf("%f", &n1);
        printf("Nota 2: ");
        scanf("%f", &n2);
        printf("Nota 3: ");
        scanf("%f", &n3);

        media = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        medias[aluno] = media;
        calc_media += media;
        quant_alunos++;
    }
    for (aluno = 0; aluno < 30; aluno++) {
        printf("\nMedia do aluno %d: %.2f ", aluno + 1, medias[aluno]);
        if (medias[aluno] >= 5)
        {
            printf(" Aprovado\n");
        }else{
            printf(" Reprovado\n");
        } 
    }
    media_total = calc_media / quant_alunos;
    printf("\n\nMedia total dos alunos:%.2f", media_total);
    
    return 0;
}
