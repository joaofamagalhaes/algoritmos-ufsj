#include <stdio.h>

int main (){

    int quantNum, num, numIn = 0, numOut = 0;
    scanf("%d", &quantNum);
    for (int i = 0; i < quantNum; i++){
        scanf("%d", &num);
        if (num >= 10 && num <= 20){
            numIn++;
        }else{
            numOut++;
        }     
    }
    printf("%d in\n", numIn);
    printf("%d out\n", numOut);   


    return 0;
}