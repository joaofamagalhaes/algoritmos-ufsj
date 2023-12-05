#include <stdio.h>

int main (){
    int matriz[3][3], somaColuna[3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
         scanf("%d", &matriz[i][j]);   
        }
    }

    for(int i = 0; i < 3; i++){
        somaColuna[i] = 0;
        for (int j = 0; j < 3; j++){
            somaColuna[i] += matriz[j][i];
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Soma das colunas: \n");
    for(int i = 0; i < 3; i++){ 
        printf("%d\t", somaColuna[i]);
    }

    return 0;
}