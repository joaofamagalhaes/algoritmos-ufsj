#include <stdio.h>

#include <stdio.h>

int main() {
    // Declarar a matriz 5x5
    int matriz[5][5];

    // Preencher a matriz com 0 e a diagonal principal com 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = (i == j) ? 1 : 0;
        }
    }

    // Imprimir a matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
