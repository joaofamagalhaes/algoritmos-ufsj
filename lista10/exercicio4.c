#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double calcularMedia(double v[], int n) {
    if (n <= 0) {
        printf("O vetor está vazio.\n");
        return 0.0;
    }

    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma / n;
}

int main() {
    
    srand(time(NULL));

    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    double vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (double)rand() / RAND_MAX;
    }
   
    double media = calcularMedia(vetor, tamanho);

     
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
    
    printf("A média dos elementos no vetor é: %.2f\n", media);

    return 0;
}
