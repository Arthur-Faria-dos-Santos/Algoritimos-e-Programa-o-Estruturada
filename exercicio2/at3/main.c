#include <stdio.h>

    main() {

    float cumprimento, largura, area;

    printf("Digite o cumprimento :");
    fflush(stdin);
    scanf("%f", cumprimento);

    printf("Digite um largura:");
    fflush(stdin);
    scanf("%f", largura);

    area = cumprimento * largura;
    
    printf("A area da sala é: %.2f", area);
}