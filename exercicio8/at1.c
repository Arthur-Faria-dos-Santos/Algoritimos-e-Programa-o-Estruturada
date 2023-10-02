
#include <stdio.h>

int main (){
int capacidade = 3, maior_idade_ruim = 0, idade_otimo = 0, idade_ruim = 0, idade_pessimo = 0, idade = 0, A = 0, B = 0, C = 0, D = 0, E = 0;
float dif_bom_reg, media_id_ruim, porc_pessimo, dif_id_otimo_ruim;
char opinioes;

for (int i = 0; i < capacidade; i++)
{

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("digite a opiniao sobre o filme\n A = Otimo\n B = Bom\n C = Regular \n D = Ruim\n E = Pessimo\n");
    scanf("%s", &opinioes);

    if (opinioes == 'A')
    {
        A++;
        if (idade > idade_otimo)
        {
            idade_otimo = idade;
        }
    }else if (opinioes == 'B')
    {
        B++;
    }else if (opinioes == 'C')
    {
        C++;
    }else if (opinioes == 'D')
    {
        D++;
        if (idade > maior_idade_ruim)
        {
            maior_idade_ruim = idade;
        }
        idade_ruim += idade;
    }else if (opinioes == 'E')
    {
        E++;
        if (idade > idade_pessimo)
        {
            idade_pessimo = idade;
        }
        
    }

}

    dif_bom_reg = B / C;
    media_id_ruim = idade_ruim / D;
    porc_pessimo = capacidade / E;
    dif_id_otimo_ruim = idade_otimo / maior_idade_ruim;

    printf("\nQuantidade de respostas (Otimo):%d", A);
    printf("\nDiferença percentual entre respostas bom e regular:%.2f", dif_bom_reg);
    printf("\nMedia de idade das pessoas que responderam ruim:%.2f", media_id_ruim);
    printf("\nPorcentagem de respostas péssimo:%.2f %%  Maior idade que utilizou esta opçao:%d", porc_pessimo, idade_pessimo);
    printf("\nDiferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim:%.2f", dif_id_otimo_ruim);

}