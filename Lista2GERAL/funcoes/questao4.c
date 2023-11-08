#include <stdio.h>

double operacao (double a, double b, char op){
    double resultado;
    scanf("%lf %lf %c", &a, &b, &op);
    switch (op){
        case '+':
            resultado = a + b;
            printf ("%.2lf\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf ("%.2lf\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf ("%.2lf\n", resultado);
            break;
        case '/':
            resultado = a / b;
            printf ("%.2lf\n", resultado);
            break;
        default: 
            break;
    }
}

int main () {
    
    double a_ex, b_ex;
    char op_ex;
    operacao(a_ex, b_ex, op_ex);

    return 0;
}