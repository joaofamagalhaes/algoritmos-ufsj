#include <stdio.h>

typedef struct{ 
  float comprimento; 
  float largura;
  float altura; 
} Caixa;

int cabe (Caixa a, Caixa b){
  printf("Digite o comprimento, largura e altura da caixa 'a': \n");
  scanf("%f %f %f", &a.comprimento, &a.largura, &a.altura);
  printf("Digite o comprimento, largura e altura da caixa 'b': \n");
  scanf("%f %f %f", &b.comprimento, &b.largura, &b.altura);

  if (a.comprimento < b.comprimento && a.largura < b.largura && a.altura < b.altura) return 1;
  if (a.comprimento > b.comprimento && a.largura > b.largura && a.altura > b.altura) return 0;
} 

int main () {
  
  cabe (Caixa a, Caixa b);


  return 0;
}