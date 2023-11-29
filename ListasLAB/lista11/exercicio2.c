#include <stdio.h>
#include <string.h>
#define MAX_TAM 100

int main () {
    char str [MAX_TAM];
    fgets(str, MAX_TAM, stdin);
    for (int i = MAX_TAM; i >= 0; i--){ 
        printf("%c", str[i]);
    }
    printf("\n");
return 0;
}