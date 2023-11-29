#include <stdio.h>


double calcularProdutoEscalar(double u[], double v[], int n) {
    double produtoEscalar = 0.0;

    for (int i = 0; i < n; i++) {
        produtoEscalar += u[i] * v[i];
    }
    return produtoEscalar;
}

int main() {
    int dimensao;
    printf("Digite a dimensão dos vetores: ");
    scanf("%d", &dimensao);

    if (dimensao <= 0) {
        printf("Dimensão inválida.\n");
        return 1;
    }

    double u[dimensao], v[dimensao];

    printf("Digite os elementos do vetor u:\n");
    for (int i = 0; i < dimensao; i++) {
        printf("Elemento %d: ", i);
        scanf("%lf", &u[i]);
    }

    printf("Digite os elementos do vetor v:\n");
    for (int i = 0; i < dimensao; i++) {
        printf("Elemento %d: ", i);
        scanf("%lf", &v[i]);
    }

    double resultado = calcularProdutoEscalar(u, v, dimensao);

    printf("O produto escalar dos vetores u e v é: %.2f\n", resultado);

    return 0;
}
