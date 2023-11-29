#include <stdio.h>

int main (){

    int quantDiv, num1, num2;
    double result;

    scanf("%d", &quantDiv);
    for (int i = 0; i < quantDiv; i++){
        
        scanf("%d %d", &num1, &num2);
        
        if (num2 == 0){
            printf("divisao impossivel\n");
        }else {
        result = (double)num1 / num2;       
        printf("%.1lf\n", result);
        }   
    }
    return 0;
}