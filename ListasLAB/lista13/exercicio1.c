#include <stdio.h>
#include <stdlib.h>

int *cria_inteiro(int n) {
    
    int *pont = (int *)malloc(sizeof(int));
    *pont = n;

    return pont;
}

int main() {
    int *pont_int = cria_inteiro(42);

    printf("%d\n", *pont_int);

    free(pont_int);

    return 0;
}
