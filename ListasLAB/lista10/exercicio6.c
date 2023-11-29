#include <stdio.h>
#include <math.h>

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

double calcularDesvioPadrao(double v[], int n) {
    if (n <= 0) {
        printf("O vetor está vazio.\n");
        return 0.0;
    }

    double media = calcularMedia(v, n);
    double somaQuadradosDiferencas = 0.0;

    for (int i = 0; i < n; i++) {
        double diferenca = v[i] - media;
        somaQuadradosDiferencas += diferenca * diferenca;
    }

    double variancia = somaQuadradosDiferencas / n;
    double desvioPadrao = sqrt(variancia);
    return desvioPadrao;
}

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    double vetor[tamanho];
    printf("Digite os elementos do vetor:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i);
        scanf("%lf", &vetor[i]);
    }

    double desvioPadrao = calcularDesvioPadrao(vetor, tamanho);
    printf("O desvio padrão do vetor é: %.2f\n", desvioPadrao);

    return 0;
}
