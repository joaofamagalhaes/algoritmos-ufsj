#include <stdio.h>
#include <string.h>

#define MAX_TAM 1000


void inverteString(char string[MAX_TAM]){
    int tamanho = strlen(string);
    for (int i = tamanho; i >= 0; i--){
        printf("%c", string[i]);
    }
}

int main () {
    char string_aux[MAX_TAM];
    fgets (string_aux, MAX_TAM, stdin);
    inverteString(string_aux);

    return 0;
}