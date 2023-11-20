#include <stdio.h>
#include <string.h>
const float salario_minimo = 1400.0; 

char validaSexo() {
    char sexo;
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo inválido. Digite novamente (M/F): ");
        scanf(" %c", &sexo);
    }

    return sexo;
}

float validaSalario() {
    float salario;
    printf("Digite o salário em reais: ");
    scanf("%f", &salario);

    while (salario <= 1.0) {
        printf("Salário inválido. Deve ser maior que R$ 1,00. Digite novamente: ");
        scanf("%f", &salario);
    }

    return salario;
}

void classificaSalario(float salario, int* abaixo, int* acima) {
    if (salario < salario_minimo) {
        (*abaixo)++;
    } else {
        (*acima)++;
    }
}

void mostraClassifica(float salario, char sexo) {
    printf("Salário: R$ %.2f\n", salario);

    if (salario < salario_minimo) {
        printf("Classificação: Abaixo do salário mínimo\n");
    } else if (salario == salario_minimo) {
        printf("Classificação: Igual ao salário mínimo\n");
    } else {
        printf("Classificação: Acima do salário mínimo\n");
    }

    if (sexo == 'M' || sexo == 'm') {
        printf("Sexo: Masculino\n");
    } else {
        printf("Sexo: Feminino\n");
    }

}

int main() {
    int salario_abaixo = 0, salario_acima = 0;
    
    while (1) {
        char sexo = validaSexo();
        float salario = validaSalario();

        classificaSalario(salario, &salario_abaixo, &salario_acima);
        mostraClassifica(salario, sexo);

        char continuar;
        printf("Deseja cadastrar mais um assalariado? (S para sim, qualquer outra tecla para não): ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    printf("\nQuantidade de assalariados abaixo do salário mínimo: %d\n", salario_abaixo);
    printf("Quantidade de assalariados acima do salário mínimo: %d\n", salario_acima);

    return 0;
}
