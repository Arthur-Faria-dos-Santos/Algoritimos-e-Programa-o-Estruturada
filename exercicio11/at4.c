#include <stdio.h>
#include <math.h>
double volumeC(double alt, double raio);

main(){
    double altura = 2, raio = 1, volume;
    volume = volumeC(altura, raio);
    printf("%lf", volume);
}
double volumeC(double alt, double raio){
    double PI = 3.14159;
    double volume = PI * pow(raio, 2) * alt;
    return volume;
}
