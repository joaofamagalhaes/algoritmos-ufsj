#include <stdio.h>

int somaImpares(int x, int y){
        int soma = 0; 
            for (int i = x + 1; i < y; i++){
                if (i % 2 != 0){
                    soma = i + soma;
                }
            }    
         
        return soma; 
    }

int main(){

    int quant, x, y;

    scanf("%d", &quant);
     for (int t = 0; t < quant; t++){
        scanf("%d %d", &x, &y);
            if (x < y){ 
            printf("%d\n", somaImpares(x, y));
            } else{
            printf("%d\n", somaImpares(y, x));
            }
        }
  
        return 0;
    }