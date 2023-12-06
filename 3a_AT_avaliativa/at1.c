#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define LIST_LIMIT 999

typedef struct User {
	int id;
	char desc[70];	
	int amoult;	
	float value;
} User;

int lista_User = 0;

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

User* initiateList () {
	User *users = malloc(LIST_LIMIT);
	return users;
}

    // Criacao

void criacao_produto (User Lis_usuario[]) {
	clearScreen();

	srand(time(NULL));
	int id = rand();
	Lis_usuario[lista_User].id = id;

	printf("--- CRIACAO DE PRODUTO --- \n");
	printf("Digite a descricao: ");
	fgets(Lis_usuario[lista_User].desc, 70, stdin);
	printf("Digite a quantidade: ");
	scanf("%d", &Lis_usuario[lista_User].amoult);
	printf("Digite o valor: ");
	scanf("%f", &Lis_usuario[lista_User].value);
	
	lista_User++;
	clearScreen();
}

    // Listar

void ReadAll (User Lis_usuario[]) {
	clearScreen();

	printf("--- RELATORIO --- \n\n");
	for(int i = 0; i < lista_User; i++) {
		if (Lis_usuario[i].id != 0) {
			printf("ID %d \n", Lis_usuario[i].id);
			printf("Descricao %s", Lis_usuario[i].desc);
			printf("quantidade %d \n", Lis_usuario[i].amoult);
			printf("VALOR %.2f \n", Lis_usuario[i].value);
			printf("\n");
		}
	}
}

    // Procurar por ID

void Busc_ID (User Lis_usuario[]) {
	clearScreen();
	
	int targetId;
	printf("Digite um ID (numero): ");
	scanf("%d", &targetId);

	for(int i = 0; i < lista_User; i++) {
		if(targetId == Lis_usuario[i].id) {
			printf("ID %d \n", Lis_usuario[i].id);
			printf("DESCRICAO %s", Lis_usuario[i].desc);
			printf("QUANTIDADE %d \n", Lis_usuario[i].amoult);
			printf("VALOR %.2f \n", Lis_usuario[i].value);
			printf("\n");
		}
	}
}

void remov_elemento(User *array, int index, int array_length)
{
   int i;
   for(i = index; i < array_length; i++) array[i] = array[i + 1];
}

    // ID delete

void Delete_ID (User Lis_usuario[]) {
	clearScreen();
	
	int targetId;
	printf("Digite um ID: ");
	scanf("%d", &targetId);

	for(int i = 0; i < lista_User; i++) {
		if(targetId == Lis_usuario[i].id) {
			remov_elemento(Lis_usuario, i, lista_User);
			return;
		}
	}
	printf("O produto nao esta cadastrado. \n");
}


    // Identificador de opcao escolhida


void identificador (User Lis_usuario[]) {
	char input;
	scanf("%s", &input);
	getchar();

	switch (input)
	{
	case 'C':
	case 'c':
		criacao_produto(Lis_usuario);
		break;
	case 'R':
	case 'r':
		ReadAll(Lis_usuario);
		break;
	case 'U':
	case 'u':
		Busc_ID(Lis_usuario);
		break;
	case 'D':
	case 'd':
		Delete_ID(Lis_usuario);
		break;
	default:
		break;
	}
}

int main () {
	User* Lis_usuario = initiateList();

	while (1) {
		printf("\n");
		printf("C - Crie \n");
		printf("R - Leia tudo \n");
		printf("U - Leia por ID \n");
		printf("D - DELETE \n");
		printf("Ctrl + C - SAIR \n");

		identificador(Lis_usuario);
	}


	return 0;
}