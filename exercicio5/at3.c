#include <stdio.h>

// Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar.//
// As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

int main (){
int idade, temp_serv;    

printf("Digite sua idade:");
scanf("%d", &idade);
fflush(stdin);

printf("Digite seu tempo de servico:");
scanf("%d", &temp_serv);
fflush(stdin);


if (idade >= 65 || temp_serv >= 30 || idade >= 60 && temp_serv >= 25){
    printf("Voce pode se aposentar");
}else {
    printf("Voce nao pode se aposentar");
}

return 0;
}