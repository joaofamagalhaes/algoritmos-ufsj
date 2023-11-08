#include <stdio.h>

struct vetor {
    int x;
    int y;
    int z;
};

typedef struct vetor Vetor;

Vetor soma_vetores (Vetor x, Vetor y){
    printf("Digite o x, y e z do V1:\n");
    scanf("%d %d %d", &x.x, &x.y, &x.z);
    printf("Digite o x, y e z do V2:\n");
    scanf("%d %d %d", &y.x, &y.y, &y.z);
    int resultadoX = (x.x + y.x);
    int resultadoY = (x.y + y.y);
    int resultadoZ = (x.z + y.z);
    printf("Resultado da soma = (%d, %d, %d)\n", resultadoX, resultadoY, resultadoZ);
}

int main () {
    Vetor x;
    Vetor y;
    soma_vetores(x, y);

    return 0;
}