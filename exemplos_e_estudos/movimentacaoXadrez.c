#include <stdio.h>

int main() {
    int linha, coluna;

    // Solicita a posição da Torre
    printf("Digite o numero da linha da Torre (1-8): ");
    scanf("%d", &linha);

    printf("Digite o numero da coluna da Torre (1-8): ");
    scanf("%d", &coluna);

    // Imprime o tabuleiro de xadrez com os possíveis movimentos da Torre
    printf("Tabuleiro de xadrez com os possiveis movimentos da Torre:\n");
    
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (i == linha && j == coluna) {
                printf("T "); // Posição da Torre
            } else if (i == linha || j == coluna) {
                printf("x "); // Possível movimento da Torre
            } else {
                printf("- "); // Outras posições
            }
        }
        printf("\n");
    }

    return 0;
}