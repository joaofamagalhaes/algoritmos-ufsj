#include <stdio.h>

int main (){

    int num1, num2, maior, posicao;
    
    for (int i = 0; i <= 100; i++){
        scanf("%d %d", &num1, &num2);
        
        if (num1 > num2){
            maior = num1;
            posicao = i;
        }else {
            maior = num2;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}