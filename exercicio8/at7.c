#include <stdio.h>

int main() {

    char nome[10][50];
    char sexo;
    float altura[10], peso[10];
    int homens = 0, mulheres = 0;
    float altura_homens = 0, altura_mulheres = 0, altura_total = 0;
    float peso_homens = 0, peso_mulheres = 0, peso_total = 0;


    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Altura (em metros): ");
        scanf("%f", &altura[i]);
        printf("Peso (em kg): ");
        scanf("%f", &peso[i]);

        if (sexo == 'M' || sexo == 'm') {
            homens++;
            altura_homens += altura[i];
            peso_homens += peso[i];
        } else if (sexo == 'F' || sexo == 'f') {
            mulheres++;
            altura_mulheres += altura[i];
            peso_mulheres += peso[i];
        }

        altura_total += altura[i];
        peso_total += peso[i];
        }
    float m_alt_hom = homens > 0 ? altura_homens / homens : 0;
    float me_alt_mul = mulheres > 0 ? altura_mulheres / mulheres : 0;
    float m_alt_gp = altura_total / 10;

    float m_peso_hom = homens > 0 ? peso_homens / homens : 0;
    float m_peso_mul = mulheres > 0 ? peso_mulheres / mulheres : 0;
    float m_peso_gp = peso_total / 10;


    printf("\nResultados:\n");
    printf("\nNumero de homens: %d\n", homens);
    printf("\nNumero de mulheres: %d\n", mulheres);
    printf("\nAltura media dos homens: %.2f metros\n", m_alt_hom);
    printf("\nAltura media das mulheres: %.2f metros\n", me_alt_mul);
    printf("\nAltura media do grupo: %.2f metros\n", m_alt_gp);
    printf("\nPeso medio dos homens: %.2f kg\n", m_peso_hom);
    printf("\nPeso medio das mulheres: %.2f kg\n", m_peso_mul);
    printf("\nPeso medio do grupo: %.2f kg\n", m_peso_gp);

    return 0;
}
