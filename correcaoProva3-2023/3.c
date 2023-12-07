#include <stdio.h>

void str_invertida(char str[], int inicio, int fim){
    if (fim > inicio) return;
    str_invertida(str, inicio + 1, fim);
    printf ("%c", str[inicio]);
    
}