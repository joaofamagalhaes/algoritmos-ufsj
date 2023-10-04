#include <stdio.h>

int main (){

    int num1, num2;
    for (int i = 0; i < 1000; i++){
        scanf("%d %d", &num1, &num2);
        if (num1 > num2){
            printf("Decrescente\n");
        } else if (num2 > num1) {
            printf("Crescente\n");
        } else if (num1 == num2){
            break;
        }
        
    }

    return 0;
}