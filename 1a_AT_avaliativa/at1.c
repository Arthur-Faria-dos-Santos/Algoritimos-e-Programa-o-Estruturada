#include<stdio.h>
#include<math.h>

int main(){
float x, fx;

printf("digite o valor de X:");
scanf("%f", &x);

fx = ((5 * x) + 3) / sqrt(((x * x) - 16));
printf("O valor de F(X) e:%.2f", fx);
}