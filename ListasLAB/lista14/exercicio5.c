#include <stdio.h>

void decimalParaBinario(int numero) {
    if (numero > 0) {
        decimalParaBinario(numero / 2);
        printf("%d", numero % 2);
    }
}

int main() {
    
    int decimal = 27;  

    decimalParaBinario(decimal);

    return 0;
}
