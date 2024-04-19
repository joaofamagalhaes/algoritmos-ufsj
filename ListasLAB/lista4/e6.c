#include <stdio.h>
#include <math.h>

int main() {
    int num_lados;
    float medida_lado;

    printf("Digite o numero de lados do poligono regular (minimo 2, maximo 5): ");
    scanf("%d", &num_lados);

    if (num_lados >= 2 && num_lados <= 5) {
        printf("Digite a medida do lado do poligono (em cm): ");
        scanf("%f", &medida_lado);

        switch (num_lados) {
            case 3:
                printf("TRIANGULO\n");
                printf("Area: %.2f cm\n", (sqrt(3) / 4) * medida_lado * medida_lado);
                break;
            case 4:
                printf("QUADRADO\n");
                printf("Area: %.2f cm\n", medida_lado * medida_lado);
                break;
            case 5:
                printf("PENTAGONO\n");
                break;
            default:
                printf("Numero de lados invalido!\n");
                break;
        }
    } else {
        printf("Numero de lados invalido!\n");
    }

    return 0;
}
