#include <stdio.h>

int main (){
    
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}