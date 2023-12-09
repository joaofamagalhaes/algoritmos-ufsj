#include <stdio.h>

int calcularPotencia(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * calcularPotencia(x, y - 1);
    }
}

int main() {
    int x = 2; 
    int y = 3; 

    int resultado = calcularPotencia(x, y);

    printf("%d^%d = %d\n", x, y, resultado);

    return 0;
}
