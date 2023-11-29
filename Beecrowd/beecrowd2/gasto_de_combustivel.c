#include <stdio.h>

int main (){

    int horas, velmedia;
    double litros;

    scanf("%d %d", &horas, &velmedia); 

    litros = velmedia * (double)horas / 12; 

    printf("%.3lf\n", litros);


    return 0;
}