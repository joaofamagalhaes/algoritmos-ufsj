#include <stdio.h>

int main() {

    double salario, novoSalario, reajuste;
    int indiceReajuste;


    scanf("%lf", &salario);

    if (salario <= 400.00) {
        indiceReajuste = 15;
    } else if (salario <= 800.00) {
        indiceReajuste = 12;
    } else if (salario <= 1200.00) {
        indiceReajuste = 10;
    } else if (salario <= 2000.00) {
        indiceReajuste = 7;
    } else {
        indiceReajuste = 4;
    }

    reajuste = salario * (indiceReajuste / 100.0);
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Valor do reajuste: %.2lf\n", reajuste);
    printf("Indice de reajuste: %d%%\n", indiceReajuste);

    return 0;
}
