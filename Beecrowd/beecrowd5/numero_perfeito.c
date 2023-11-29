#include <stdio.h>

int numPerfeito(int n){
    int div = 0;
    for(int i = 1; i < n; i++){
        if (n % i == 0){
            div += i;
        }
    }
    if (div == n){
        printf("%d eh perfeito\n", n);
    } else {
        printf("%d nao eh perfeito\n", n);
    }
}

int main (){
    int n, quant;
    scanf("%d", &quant);
    for (int t = 0; t < quant; t++){
        scanf("%d", &n);
        numPerfeito(n);
    }
    return 0;
}