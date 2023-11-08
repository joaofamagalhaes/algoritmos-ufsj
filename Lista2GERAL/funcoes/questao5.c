#include <stdio.h>

void eh_primo(int x){
    int aux = 0;
    scanf("%d", &x);
    for (int i = 2; i <= x / 2; i++){
        if (x % i == 0){
            aux++;
            break;
        }
    }

    if (aux == 0){
        printf("%d eh primo!\n", x);
    }
    else{
        printf("%d nao eh primo!\n", x);
    }
}

int main(){

    int x_aux;
    eh_primo(x_aux);

    return 0;
}