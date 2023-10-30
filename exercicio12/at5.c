#include <stdio.h>
#include <time.h>

void calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento) {
    time_t t = time(NULL);
    struct tm tm_atual = *localtime(&t);

    int diaAtual = tm_atual.tm_mday;
    int mesAtual = tm_atual.tm_mon + 1;  // tm_mon vai de 0 a 11
    int anoAtual = tm_atual.tm_year + 1900;  // tm_year conta os anos desde 1900

    int anos, meses, dias;

    if (diaAtual < diaNascimento) {
        diaAtual += 30; // Assumindo que um mês tenha 30 dias
        mesAtual -= 1;
    }
    if (mesAtual < mesNascimento) {
        mesAtual += 12;
        anoAtual -= 1;
    }

    dias = diaAtual - diaNascimento;
    meses = mesAtual - mesNascimento;
    anos = anoAtual - anoNascimento;

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);
}

int main() {
    int diaNascimento, mesNascimento, anoNascimento;

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNascimento, &mesNascimento, &anoNascimento);

    calcularIdade(diaNascimento, mesNascimento, anoNascimento);

    return 0;
}
