#include <stdio.h>

double operacaoAritmetica (double x, double y, char simb){

    double resultado;

    switch (simb){
    case '+' :
        resultado = x + y;
        break;
    
    case '-' :
        resultado = x - y;
        break;
    
    case '/' :
        resultado = x / y;          
        break;
    
    case '*' :
        resultado = x * y;
        break;

    default:
        break;
    }

    return resultado;
}


int main (){
    double x, y, resultado;
    char simb;

    scanf("%lf %lf %c", &x, &y, &simb);
    resultado = operacaoAritmetica(x,y, simb);
    printf("%.2lf\n", resultado);


    return 0;
}