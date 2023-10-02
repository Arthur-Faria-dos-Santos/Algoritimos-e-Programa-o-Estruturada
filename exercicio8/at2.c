#include <stdio.h>

int main() {

    int elevador_A = 0, elevador_B = 0, elevador_C = 0;
    int periodo_M = 0, periodo_V = 0, periodo_N = 0;
    char periodo_mais_usado;
    char elevador_mais_frequentado;

    int i;
    char elevador, periodo;
    for (i = 0; i < 50; i++) {
        printf("Morador %d:\n", i + 1);
        printf("Elevador utilizado (A, B, C): ");
        scanf(" %c", &elevador);
        printf("Periodo utilizado (M, V, N): ");
        scanf(" %c", &periodo);


        switch (elevador) {
            case 'A':
                elevador_A++;
                break;
            case 'B':
                elevador_B++;
                break;
            case 'C':
                elevador_C++;
                break;
        }

        switch (periodo) {
            case 'M':
                periodo_M++;
                break;
            case 'V':
                periodo_V++;
                break;
            case 'N':
                periodo_N++;
                break;
        }
    }
    if (periodo_M >= periodo_V && periodo_M >= periodo_N) {
        periodo_mais_usado = 'M';
    } else if (periodo_V >= periodo_M && periodo_V >= periodo_N) {
        periodo_mais_usado = 'V';
    } else {
        periodo_mais_usado = 'N';
    }



    if (elevador_A >= elevador_B && elevador_A >= elevador_C) {
        elevador_mais_frequentado = 'A';
    } else if (elevador_B >= elevador_A && elevador_B >= elevador_C) {
        elevador_mais_frequentado = 'B';
    } else {
        elevador_mais_frequentado = 'C';
    }



    int maior_contador_periodo, menor_contador_periodo;
    if (periodo_M >= periodo_V && periodo_M >= periodo_N) {
        maior_contador_periodo = periodo_M;
    } else if (periodo_V >= periodo_M && periodo_V >= periodo_N) {
        maior_contador_periodo = periodo_V;
    } else {
        maior_contador_periodo = periodo_N;
    }




    if (periodo_M <= periodo_V && periodo_M <= periodo_N) {
        menor_contador_periodo = periodo_M;
    } else if (periodo_V <= periodo_M && periodo_V <= periodo_N) {
        menor_contador_periodo = periodo_V;
    } else {
        menor_contador_periodo = periodo_N;
    }

    float diferenca_percentual = ((float)(maior_contador_periodo - menor_contador_periodo) / maior_contador_periodo) * 100;
    int total_servicos = elevador_A + elevador_B + elevador_C;
    char elevador_medio;
    int contador_elevador_medio;



    if ((elevador_A < elevador_B && elevador_A > elevador_C) ||
        (elevador_A > elevador_B && elevador_A < elevador_C)) {
        elevador_medio = 'A';
        contador_elevador_medio = elevador_A;
    } else if ((elevador_B < elevador_A && elevador_B > elevador_C) ||
               (elevador_B > elevador_A && elevador_B < elevador_C)) {
        elevador_medio = 'B';
        contador_elevador_medio = elevador_B;
    } else {
        elevador_medio = 'C';
        contador_elevador_medio = elevador_C;
    }


    float percentagem_media_utilizacao = ((float)contador_elevador_medio / total_servicos) * 100;


    printf("\nResultado:\n");
    printf("Periodo mais usado");
    }
