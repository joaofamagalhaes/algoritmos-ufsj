#include <stdio.h>

int main (){

    int num1, num2;

    printf("Digite dois numeros: \n");

    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("%d eh maior que %d\n", num1, num2);
    } else if (num2 > num1){
        printf("%d eh maior que %d\n", num2, num1);
    } else if ( num1 == num2){
        printf("Os numeros sao iguais!\n");
    }

    return 0;
}