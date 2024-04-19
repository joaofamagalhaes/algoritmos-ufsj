#include <stdio.h>

int main (){

    double salario, desconto = 0; 
    
    printf("Digite o salario do funcionario: \n");
    scanf("%lf", &salario);

    if (salario > 600 && salario <=1300) {
        desconto = (salario - 600) * 0.1;
    } else if (salario > 1300) {
        desconto += (1300 - 600) * 0.1;
        desconto += (salario - 1300) * 0.15;
    } else if (salario <= 600) {
        desconto = 0;
    };

    printf("Desconto do imposto de renda = %.2lf\n", desconto);
    
    return 0;
}