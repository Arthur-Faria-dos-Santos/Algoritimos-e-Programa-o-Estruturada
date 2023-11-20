#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 1000

typedef struct {
    int id;
    char nome_completo[100];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

int gerarId() {
    return rand() % 10000 + 1;
}

void incluirUsuario(Usuario usuarios[], int* total_user) {
    if (*total_user < MAX_USUARIOS) {
        Usuario novo_user;
        novo_user.id = gerarId();

        printf("Digite o nome completo: ");
        scanf(" %[^\n]s", novo_user.nome_completo);

        printf("Digite o e-mail: ");
        scanf(" %s", novo_user.email);

        while (strchr(novo_user.email, '@') == NULL) {
            printf("E-mail invalido. Digite novamente: ");
            scanf(" %s", novo_user.email);
        }

        printf("Digite o sexo (Feminino/Masculino/Indiferente): ");
        scanf(" %s", novo_user.sexo);

        while (strcmp(novo_user.sexo, "Feminino") != 0 && strcmp(novo_user.sexo, "Masculino") != 0 && strcmp(novo_user.sexo, "Indiferente") != 0) {
            printf("Sexo invalido. Digite novamente: ");
            scanf(" %s", novo_user.sexo);
        }

        printf("Digite o endereço: ");
        scanf(" %[^\n]s", novo_user.endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novo_user.altura);

        while (novo_user.altura < 1.0 || novo_user.altura > 2.0) {
            printf("Altura invalida. Digite novamente: ");
            scanf("%lf", &novo_user.altura);
        }

        printf("A pessoa foi vacinada? (1 para sim, 0 para não): ");
        scanf("%d", &novo_user.vacina);

        usuarios[*total_user] = novo_user;
        (*total_user)++;

        printf("Usuario cadastrado com sucesso. ID: %d\n", novo_user.id);
    } else {
        printf("Limite máximo de usuários atingido.\n");
    }
}

void editarUsuario(Usuario usuarios[], int total_user) {
    int idEditar;
    printf("Digite o ID do usuario a ser editado: ");
    scanf("%d", &idEditar);

    for (int i = 0; i < total_user; i++) {
        if (usuarios[i].id == idEditar) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]s", usuarios[i].nome_completo);

            printf("Digite o novo e-mail: ");
            scanf(" %s", usuarios[i].email);

            while (strchr(usuarios[i].email, '@') == NULL) {
                printf("E-mail invalido. Digite novamente: ");
                scanf(" %s", usuarios[i].email);
            }

            printf("Digite o novo sexo (Feminino/Masculino/Indiferente): ");
            scanf(" %s", usuarios[i].sexo);

            while (strcmp(usuarios[i].sexo, "Feminino") != 0 &&
                   strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                   strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                printf("Sexo invalido. Digite novamente: ");
                scanf(" %s", usuarios[i].sexo);
            }

            printf("Digite o novo endereco: ");
            scanf(" %[^\n]s", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);

            while (usuarios[i].altura < 1.0 || usuarios[i].altura > 2.0) {
                printf("Altura invalida. Digite novamente: ");
                scanf("%lf", &usuarios[i].altura);
            }

            printf("A pessoa foi vacinada? (1 para sim, 0 para não): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuario editado com sucesso.\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void excluirUsuario(Usuario usuarios[], int* total_user) {
    int idExcluir;
    printf("Digite o ID do usuario a ser excluido: ");
    scanf("%d", &idExcluir);

    for (int i = 0; i < *total_user; i++) {
        if (usuarios[i].id == idExcluir) {
            for (int j = i; j < *total_user - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }

            (*total_user)--;
            printf("Usuário excluido com sucesso.\n");
            return;
        }
    }

    printf("Usuario não encontrado.\n");
}

void buscarUsuarioPorEmail(Usuario usuarios[], int total_user) {
    char emailBusca[100];
    printf("Digite o e-mail do usuario a ser buscado: ");
    scanf(" %s", emailBusca);

    for (int i = 0; i < total_user; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            printf("Usuario encontrado:\n");
            printf("ID: %d | Nome: %s | E-mail: %s | Sexo: %s | Endereco: %s | Altura: %.2f | Vacina: %s\n",
                   usuarios[i].id, usuarios[i].nome_completo, usuarios[i].email,
                   usuarios[i].sexo, usuarios[i].endereco, usuarios[i].altura,
                   usuarios[i].vacina ? "Sim" : "Não");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void imprimirTodosUsuarios(Usuario usuarios[], int total_user) {
    printf("Lista de Todos os Usuarios:\n");
    for (int i = 0; i < total_user; i++) {
        printf("ID: %d | Nome: %s | E-mail: %s | Sexo: %s | Endereco: %s | Altura: %.2f | Vacina: %s\n",
               usuarios[i].id, usuarios[i].nome_completo, usuarios[i].email,
               usuarios[i].sexo, usuarios[i].endereco, usuarios[i].altura,
               usuarios[i].vacina ? "Sim" : "Não");
    }
}

int main() {
    srand(time(NULL));

    Usuario usuarios[MAX_USUARIOS];
    int total_user = 0;
    char opcao;

    do {
        printf("\n--- Menu ---\n");
        printf("1 == Incluir Usuario\n");
        printf("2 == Editar Usuario\n");
        printf("3 == Excluir Usuario\n");
        printf("4 == Buscar Usuario por E-mail\n");
        printf("5 == Imprimir Todos os Usuarios\n");
        printf("0 == Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &total_user);
                break;
            case '2':
                editarUsuario(usuarios, total_user);
                break;
            case '3':
                excluirUsuario(usuarios, &total_user);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, total_user);
                break;
            case '5':
                imprimirTodosUsuarios(usuarios, total_user);
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != '0');

    return 0;
}