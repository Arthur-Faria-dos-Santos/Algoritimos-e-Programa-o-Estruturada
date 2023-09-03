#include<stdio.h>
int main(){
    
    char nome[25];
    int idade;
    int matricula;
    char endereco[50];
    char curso[25];
    char periodo[25];
    char disciplinas[50];
    float valorMensalidade;



    printf("\n Digite o nome do usuario:");
    fgets(nome, 25, stdin);

    printf("\n Digite sua Idade:");
    scanf("%d" ,&idade);

    printf("\nMatricula:");
    fflush(stdin);
    scanf("%d" ,&matricula);

    printf("\nDigite deu endereco:");
    fflush(stdin);
    fgets(endereco, 50, stdin);

    printf("\nDigite seu curso:");
    fflush(stdin);
    fgets(curso, 25, stdin);

    printf("\nDigite seu periodo:");
    fflush(stdin);
    fgets(periodo, 25, stdin);

    printf("\nDigite sua Disciplina:");
    fgets(disciplinas, 50, stdin);

    printf("\nDigite o valor de sua mensalidade:");
    fflush(stdin);
    scanf("%f" ,&valorMensalidade);

    printf("\n- - - - - -\n\n");

    printf("Nome Usuario: %s", nome);
    printf("\n  Idade: %d",idade);
    printf("\n Matricula: %d",matricula);
    printf("\n Endereco: %s",endereco);
    printf("\n Curso: %s",curso);
    printf("\n Periodo: %s",periodo);
    printf("\n Disciplina: %s",disciplinas);
    printf("\n Mensalidade: %f",valorMensalidade);   
    
    return 0;
}