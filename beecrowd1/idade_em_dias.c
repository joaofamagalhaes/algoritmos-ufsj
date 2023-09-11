#include <stdio.h>

int main (){
    
    int idade, ano, mes, dia;

    scanf("%d", &idade); 
    
    ano = idade / 365;
    mes = (idade % 365) / 30;
    dia = (idade % 365) % 30;
    

    printf("%d ano (s)\n", ano);
    printf("%d mes (s)\n", mes);
    printf("%d dia (s)\n", dia);

    return 0;
}
