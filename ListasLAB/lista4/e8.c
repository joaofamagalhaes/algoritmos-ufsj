#include <stdio.h>

int main() {
    float altura, peso;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em quilogramas): ");
    scanf("%f", &peso);

    float imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc < 29.9) {
        printf("Sobrepeso\n");
    } else if (imc < 34.9) {
        printf("Obesidade Grau I\n");
    } else if (imc < 39.9) {
        printf("Obesidade Grau II (severa)\n");
    } else {
        printf("Obesidade Grau III (mórbida)\n");
    }

    return 0;
}
