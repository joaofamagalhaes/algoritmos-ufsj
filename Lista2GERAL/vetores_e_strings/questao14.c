#include <stdio.h>

void estatisticaVetor(int v[], int n){
    int negativos = 0; 
    int somaP = 0; 
    int maiorN = 0; 
    int menorN = 0;

    for (int i = 0; i < n; i++){
        if (v[i] < 0) negativos++;
        if (v[i] % 2 == 0) somaP = somaP + v[i];
        if (v[i] > v[maiorN]) maiorN = i;
        if (v[i] < v[menorN]) menorN = i;
    }
    printf ("negativos = %d\nsoma dos pares = %d\nmaior num = %d\nmenor num = %d\n", negativos, somaP, v[maiorN], v[menorN]);
}

int main () { 
    
    int v_ex[]= {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(v_ex) / sizeof (v_ex[0]);  
    estatisticaVetor(v_ex, tamanho);

    return 0;
}