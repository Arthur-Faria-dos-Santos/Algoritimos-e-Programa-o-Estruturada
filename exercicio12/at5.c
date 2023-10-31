#include <stdio.h>
#include <time.h>

void calcularIdade(int diaNasc, int mesNasc, int anoNasc) {
    time_t t = time(NULL);
    struct tm tm_atual = *localtime(&t);

    int diaAtual = tm_atual.tm_mday;
    int mesAtual = tm_atual.tm_mon + 1;
    int anoAtual = tm_atual.tm_year + 1900;

    int anos, meses, dias;

    if (diaAtual < diaNasc) {
        diaAtual += 30;
        mesAtual -= 1;
    }
    if (mesAtual < mesNasc) {
        mesAtual += 12;
        anoAtual -= 1;
    }

    dias = diaAtual - diaNasc;
    meses = mesAtual - mesNasc;
    anos = anoAtual - anoNasc;

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);
}

int main() {
    int diaNasc, mesNasc, anoNasc;

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    calcularIdade(diaNasc, mesNasc, anoNasc);

    return 0;
}
