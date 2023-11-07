#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);

    //controla a altura da piramide
    for (int i = 1; i <= n; i++){

        //alinha o espaco da piramide ao "centro"
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }
        
        // imprime o asterisco da piramide 
        for (int k = 1; k <= i * 2 - 1; k++){
            printf("*");
        }
        
        
        printf("\n");
    }


    return 0;
}