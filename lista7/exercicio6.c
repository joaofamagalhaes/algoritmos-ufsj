#include <stdio.h>

int padraoExc (int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }

}

int main (){

    int numN; 
    scanf("%d", &numN);
    padraoExc(numN);

    return 0;
}