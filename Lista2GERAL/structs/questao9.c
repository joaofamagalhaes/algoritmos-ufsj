#include <stdio.h>

typedef struct {
    float base;
    float altura;
 } retangulo;

double areaRetangulo (retangulo A){
    printf("Digite a base e a altura do retangulo: \n");
    scanf("%f %f", &A.base, &A.altura);
    float area = A.base * A.altura;
    printf("%.2f\n", area);
}

int main (){

    retangulo a;
    areaRetangulo(a);

    return 0;
}