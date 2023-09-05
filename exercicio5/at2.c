#include <stdio.h>

// Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. //
// Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. //

int main (){
int p1, p2, p3;    
float  nota_final;

printf("Digite a nota da prova 1:");
scanf("%d", &p1);
fflush(stdin);

printf("Digite a nota da prova 2:");
scanf("%d", &p2);
fflush(stdin);

printf("Digite a nota da prova 3:");
scanf("%d", &p3);
fflush(stdin);

nota_final = (p1 * 1 + p2 * 1 + p3 * 2) / 4;

if (nota_final >= 7){
    printf("Voce esta aprovado:%.2f", nota_final);
}else {
    printf("Voce esta reprovado:%.2f", nota_final);
}
return 0;
}