#include <stdio.h>
// Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

int maior(int n1, int n2){
if (n1 > n2)
{
    return n1;
}else{
    return n2;
}

}
main(){
    int n1, n2, m;

    printf("Digite dois numeros");
    scanf("%d %d", &n1, &n2);

    m = maior(n1, n2);
    printf("O maior numero e: %d", m);

}