#include <stdio.h>

int main() {
    int escolha;
    float subtotal ,total = 0.0;
    int quantidade;
    double preco = 0.0;

    printf("Menu de Frutas:\n 1 = ABACAXI - R$5,00 a unidade\n 2 = MACA - R$1,00 a unidade \n 3 = PERA - R$4,00 a unidade\n 0 = Sair\n;");

    while (1) {
        printf("Escolha o numero da fruta que deseja comprar (0 para sair): ");
        scanf("%d", &escolha);

        if (escolha == 0) {
        break;
        } else if (escolha >= 1 && escolha <= 3) {

            printf("Quantas frutas deseja comprar? ");
            scanf("%d", &quantidade);


            switch (escolha) {
                case 1:
                    preco = 5.0;
                    break;
                case 2:
                    preco = 1.0;
                    break;
                case 3:
                    preco = 4.0;
                    break;
            }
            subtotal = preco * quantidade;
            total += subtotal;

            printf("Subtotal para %d frutas: R$%.2lf\n", quantidade, subtotal);
        } else {
            printf("Escolha invalida.\n");
        }
    }

    printf("Total da compra: R$%.2lf\n", total);
}
