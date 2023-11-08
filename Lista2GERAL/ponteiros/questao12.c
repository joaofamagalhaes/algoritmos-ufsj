#include <stdio.h>

typedef struct {
    float base;
    float altura;
 } Retangulo;

void troca_ret (Retangulo *x, Retangulo *y){
    float aux;
    aux = x->base;
    x->base = y->base;
    y->base = aux;
    aux = x->altura;
    x->altura = y->altura;
    y->altura = aux;

}

int main(){
  Retangulo x = {3,4}, y = {5,6};
  troca_ret(&x, &y);
  printf("x=%.1f,%.1f y=%.1f,%.1f\n", x.base, x.altura, y.base, y.altura);
  return 0;
}

