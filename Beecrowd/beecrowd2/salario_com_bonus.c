#include <stdio.h>

int main (){

    char nome [21];
    double fixo, vendas, salariofinal;

    scanf("%s", nome);
    scanf("%lf %lf", &fixo, &vendas);
    
    salariofinal = (vendas * 0.15) + fixo;

    printf("TOTAL = %.2lf", salariofinal);

    return 0;
}