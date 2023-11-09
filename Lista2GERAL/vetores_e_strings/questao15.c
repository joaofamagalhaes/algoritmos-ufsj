#include <stdio.h>

int posicao(int v[], int n, int valor){
    for(int i = 0; i < n; i++){
        if(v[i] == valor){
            printf("esse numero esta presente no vetor! num = %d, posicao = %d\n", v[i], i);
        } 
    }
    return -1;
}

int main () {

    int v_aux[] = {0, 61, 22, 34, 54, 55, 6, 7, 8, 9, 10};
    int valor_aux;
    int tamanho;

    scanf("%d", &valor_aux);
    tamanho = sizeof(v_aux) / sizeof (v_aux[0]);

    posicao(v_aux, tamanho, valor_aux);
    return 0;
}