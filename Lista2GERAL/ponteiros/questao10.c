#include <stdio.h>

void soma1 (int *x){
    int aux = 0;
    scanf("%d", &aux);
    x = &aux;
    aux++;
    printf("%d\n", *x);
}

int main () {
    int x;
    soma1(&x);
    return 0;
}