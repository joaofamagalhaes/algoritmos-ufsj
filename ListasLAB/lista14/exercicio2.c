#include <stdio.h>

void imprimirAsteriscos(int quantidade) {
    if (quantidade > 0) {
        printf("*");
        imprimirAsteriscos(quantidade - 1);
    }
}

void imprimirTriangulo(int linha, int n) {
    if (linha > 0) {
        imprimirTriangulo(linha - 1, n);
        if (linha <= n) {
            imprimirAsteriscos(linha);
            printf("\n");
        }
    }
}

void geraTriangulo(int n, int linha) {
    if (linha <= n) {
        imprimirTriangulo(linha, n);
        geraTriangulo(n, linha + 1);
    }
}

int main() {
    geraTriangulo(4, 1);

    return 0;
}
