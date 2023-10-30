#include <stdio.h>
#include <math.h>

double volumeE(double raio);

int main() {  
    double raio, volume;
    printf("Digite o tamanho do raio:");
    scanf("%lf", &raio); 

    volume = volumeE(raio);
    printf("%lf", volume);
    return 0; 
}

double volumeE(double raio) {
    double PI = 3.14159; 
    double volume = (4.0 / (3.0 * PI)) * pow(raio, 3);  
    return volume;
}

