#include <stdio.h>
#include <stdlib.h>

#include "cubo.h"

int main(){

    Cubo cubo;
    double lado_cubo;

    printf("Qual o tamanho do lado do cubo?\n");

    scanf("%lf", &lado_cubo);

    iniciar(&cubo, lado_cubo);

    printf("Tamanho do lado do cubo = %lf\n", lado(&cubo));    
    printf("Tamanho da area do cubo = %lf\n", area(&cubo));    
    printf("Tamanho do volume do cubo = %lf\n", volume(&cubo));    

    return 0;
}