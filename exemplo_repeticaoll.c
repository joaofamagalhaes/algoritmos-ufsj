#include <stdio.h>

int main (){

    int tamanho;
    scanf("%d", &tamanho);
    
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (i != (tamanho/2) && j != (tamanho/2)){
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}