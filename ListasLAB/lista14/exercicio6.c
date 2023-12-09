#include <stdio.h>

int menorElemento(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }

    int menorRestante = menorElemento(vetor, tamanho - 1);

    return (vetor[tamanho - 1] < menorRestante) ? vetor[tamanho - 1] : menorRestante;
}

int main() {
    int vetor[] = {4, 7, 2, 1, 9, 5, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int menor = menorElemento(vetor, tamanho);

    printf("%d\n", menor);

    return 0;
}
