#include <stdio.h>

typedef struct {
    float base;
    float altura;
 } Retangulo;


void imprime_retangulo(Retangulo ret){
	printf("Por valor: base=%.1f altura=%.1f\n", ret.base, ret.altura);
}


void imprime_retangulo_ref(Retangulo *ret){
	printf("Por referencia: base=%.1f altura=%.1f\n", ret->base, ret->altura);
}

int main () {
    Retangulo aux;
    aux.base = 15;
    aux.altura = 20;
    imprime_retangulo(aux);
    imprime_retangulo_ref(&aux);
    return 0;
}