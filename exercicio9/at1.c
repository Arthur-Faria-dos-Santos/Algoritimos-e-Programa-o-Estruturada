#include<stdio.h>

int main(){
    int A[6];
    int soma_vetores;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = -7;

    soma_vetores = A[0] + A[1] + A[5];
    printf("A soma dos vetores desejado e:  %d", soma_vetores);

    A[4] = 100;
    printf("\nValores dos vetores:\nVetor 1:  %d\nVetor 2:  %d\nVetor 3:  %d\nVetor 4:  %d\nVetor 5:  %d\nVetor 6:  %d", A[0], A[1], A[2], A[3], A[4], A[5]);
}