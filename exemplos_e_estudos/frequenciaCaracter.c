#include <stdio.h>

int frequenciaCarac (char str[], char c){

    int repet = 0;
    fgets(str, 100, stdin);
    scanf("%c", &c);

    for (int i = 0; i < 100; i++) {
        if (str[i] == c){
            repet++;
        }
    }
    return repet;
}

int main () {
    char str_ex[100], c_ex;
    printf("Frequencia do caracter escolhido: %d\n", frequenciaCarac(str_ex, c_ex));

    return 0;
}