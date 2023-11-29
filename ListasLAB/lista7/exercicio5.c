#include <stdio.h>

int soma_algarismos (int x){
    int soma = 0, aux;
    while (x > 0){
        aux = x % 10;
        soma = soma + aux;
        x = x / 10;
    }
    if (x < 0) return -1;

    return soma;
}


int main (){

    int x, resultadoSoma;
    scanf("%d", &x);
    resultadoSoma = soma_algarismos(x);
    printf("%d\n", resultadoSoma);

    return 0;
}