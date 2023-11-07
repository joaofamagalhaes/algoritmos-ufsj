#include <stdio.h>

void troca_ponteiros(int **troca1, int **troca2){
    int aux;
    aux = **troca1;
    **troca1 = **troca2;
    **troca2 = aux;
}

int main(){
  
  int c1 = 30, c2 = 20;
  int *p1, *p2;
  p1 = &c1;
  p2 = &c2;
  
  troca_ponteiros(&p1, &p2);
  
  printf("%d %d", *p1, *p2);
  
  return 0;
}