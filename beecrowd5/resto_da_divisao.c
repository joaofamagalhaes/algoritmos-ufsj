#include <stdio.h>

int main (){

    int a, b, numresto;
    scanf("%d %d", &a, &b);
    if (a > b){
        for (int i = b; i < a; i++){
            if (i % 5 == 2 || i % 5 == 3){
                printf("%d\n", i);
            }
        }
    } else if (b > a){ 
        for (int i = a; i < b; i++){
            if (i % 5 == 2 || i % 5 == 3){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}