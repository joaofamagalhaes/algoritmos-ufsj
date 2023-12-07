#include <stdio.h>

// A)

void amigo_proprio (int **m, int tam){
    for (int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){ 
        m[i][j] = 1;
        }
    }
}

// B)

int num_amigos_mais_popular(int **m, int tam){
    int maior = -1;
    for(int i = 0; i < tam; i++){
        int num_amigos_i = 0;
        for (int j = 0; j < tam; j++){
            if (m[i][j] == 1){
                num_amigos_i++;
            }
        }
    if (num_amigos_i > maior){
        maior = num_amigos_i;
    }
    }
    return maior;
}