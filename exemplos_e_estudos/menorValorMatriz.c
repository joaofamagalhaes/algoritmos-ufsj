#include <stdio.h>

int main(){
  int m[3][2];
  for(int i=0; i < 3; i++){
    for(int j=0; j < 2; j++){
      printf("Digite o elemento [%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);
    }
  }
  int menor = m[0][0];
  int posMenorI = 0;
  int posMenorJ = 0;

  for(int i=0; i < 3; i++){
    for(int j=0; j < 2; j++){
      if(m[i][j] < menor){
        menor = m[i][j];
        posMenorI = i;
        posMenorJ = j;
      }		
    }
  }
  printf("Menor elemento: %d na posicao m [%d][%d]\n", menor, posMenorI, posMenorJ);
 
  return 0;
}