#include <stdio.h>

void maior_menor (int *end_var1, int *end_var2){
    int aux;
    if (*end_var1 > *end_var2){
        aux = *end_var1;
        *end_var1 = *end_var2;
        *end_var2 = aux; 
    } else {
        aux = *end_var2;
        *end_var2 = *end_var1;
        *end_var1 = aux; 
    }
}

int main () {

    int a = 2;
    int b = 7;

    maior_menor(&a, &b);
    printf("a = %d e b = %d\n", a, b);

    return 0;
}