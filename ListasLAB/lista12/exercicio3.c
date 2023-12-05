#include <stdio.h>

int main (){
    int matriz[3][3], somaLinha[3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
         scanf("%d", &matriz[i][j]);   
        }
    }

    for(int i = 0; i < 3; i++){
        somaLinha[i] = 0;
        for (int j = 0; j < 3; j++){
            somaLinha[i] += matriz[i][j];
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Soma das Linhas: \n");
    for(int i = 0; i < 3; i++){ 
        printf("%d\t", somaLinha[i]);
    }

    return 0;
}