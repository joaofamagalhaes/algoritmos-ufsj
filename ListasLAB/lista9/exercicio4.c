#include <stdio.h>

int main (){

    int x, y;

    x = 0;
    y = 1;

    if (&x > &y){
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }

    return 0;
}