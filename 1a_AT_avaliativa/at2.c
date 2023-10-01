#include<stdio.h>
#include<math.h>

int main(){

    int idade = 0, ze_flag = 0;
    float chico = 1.50, ze = 1.10;
    
    while (ze_flag == 0){
        idade += 1;  
    if (ze > chico)
    {
        ze_flag = 1;
    }

    chico += 0.02;
    ze += 0.03;
    }
    printf("Foram necessarios %d anos", idade);

}