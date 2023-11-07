#include <stdio.h>

int soma1 (int x){
    x++;
    return x;
}

int main (){

    int x1;
    scanf("%d", &x1);
    printf("%d\n", soma1(x1));

    return 0;
}