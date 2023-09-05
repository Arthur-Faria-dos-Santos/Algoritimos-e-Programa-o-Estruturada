#include <stdio.h>

//Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário.
// Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. 
//Faça um programa que leia: o valor do salario atual do funcionário;  • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

int main (){
int temp_serv;
float salario, reajuste, bonus, salario_final;    

printf("Digite seu salario:");
scanf("%f", &salario);
fflush(stdin);

printf("Digite seu tempo de servico:");
scanf("%d", &temp_serv);
fflush(stdin);

if(salario < 500){
    reajuste = (salario * 25) / 100;
}else if (salario > 500 && salario < 1000){
    reajuste = (salario * 20) / 100;
}else if(salario > 1000 && salario < 1500){
    reajuste = (salario * 15) / 100;
}else if (salario > 1500 && salario < 2000){
    reajuste = (salario * 10) / 100;
}else if(salario > 2000){
    reajuste = (salario * 0) / 100;
}

if (temp_serv < 1){
    bonus = 0;
}else if(temp_serv > 1 && temp_serv <= 3){
    bonus = 100;
}else if(temp_serv > 3 && temp_serv <= 6){
    bonus = 200;
}else if(temp_serv > 6 && temp_serv <= 10){
    bonus = 300;
}else if(temp_serv > 10){
    bonus = 500;
}

salario_final = salario + reajuste + bonus;

printf ("Seu salario e:%f", salario_final);


return 0;
}