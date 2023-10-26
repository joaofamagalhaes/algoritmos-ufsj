#include <stdio.h> 

double conversor (double resultado){
    double fr;
    scanf("%lf", &fr);
    resultado = (fr - 32.0) * (5.0/9.0);

    return resultado;
}

int main (){
    double resultado = 0;
    resultado = conversor (resultado);
    printf("%.2lf\n", resultado);
    return 0;
}