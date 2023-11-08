#include <stdio.h>

void troca (int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
  int x = 5, y = 3;
  troca(&x, &y);
  printf("x=%d y=%d\n", x, y);
  return 0;
}