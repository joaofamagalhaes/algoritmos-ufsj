#include <stdio.h>
struct info {
    int eh_amigo;
    int grupos_comum;
};

// A)

double media_grupos_por_amigo(struct info **m, int tam, int pessoa){
    int soma_amigos = 0, soma_grupos = 0;
    for (int j = 0; j < tam; j++){
        if (m[pessoa][j].eh_amigo == 1){
            soma_amigos++;
            soma_grupos += m[pessoa][j].grupos_comum;
        }
    }
    return soma_grupos/(double)soma_amigos;
}

// B)

int devem_ser_amigos (struct info **m, int tam, int pessoa1, int pessoa2){
    if (m[pessoa1][pessoa2].eh_amigo == 1) return 1;
    double m1 = media_grupos_por_amigo(m, tam, pessoa1);
    double m2 = media_grupos_por_amigo(m, tam, pessoa2);
    int grupos_comum = m[pessoa1][pessoa2].grupos_comum;
    if (grupos_comum > m1 && grupos_comum > m2) return 1;
    return 0;
}