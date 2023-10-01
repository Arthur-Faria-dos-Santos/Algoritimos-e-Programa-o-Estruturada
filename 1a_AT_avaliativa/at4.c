#include <stdio.h>

int main() {
    float A, B, C;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A + B > C && A + C > B && B + C > A) {
        float A_ao_qrdado = A * A;
        float B_ao_qrdado = B * B;
        float C_ao_qrdado = C * C;

        if (A_ao_qrdado + B_ao_qrdado == C_ao_qrdado || A_ao_qrdado + C_ao_qrdado == B_ao_qrdado || B_ao_qrdado + C_ao_qrdado == A_ao_qrdado) {
            printf("Triangulo Retangulo (90 graus)\n");
        }
        else if (A_ao_qrdado + B_ao_qrdado < C_ao_qrdado || A_ao_qrdado + C_ao_qrdado < B_ao_qrdado || B_ao_qrdado + C_ao_qrdado < A_ao_qrdado) {
            printf("Triangulo Obtusangulo (> 90 graus)\n");
        }
        else {
            printf("Triangulo Acutangulo (< 90 graus)\n");
        }
    } else {
        printf("Nao e um triangulo\n");
    }

    return 0;
}