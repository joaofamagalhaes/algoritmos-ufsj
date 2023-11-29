#include <stdio.h>

void maiorEposicao(int v[], int n){
    int maior = 0;
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }
    printf("maior = %d\nposicao = %d", maior, pos);
}

int main () {
    int v[] = {3, 5, 64, 2, 6};
    maiorEposicao(v, 5);

    return 0;
}