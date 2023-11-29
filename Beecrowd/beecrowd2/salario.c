#include <stdio.h>

int main (){

    int numero, horas;
    double valorhora, salario;

    scanf("%d %d %lf", &numero, &horas, &valorhora);

    salario = horas * valorhora;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);


    return 0;
}