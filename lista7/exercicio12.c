#include <stdio.h>

int mmc (int x, int y){
    scanf ("%d %d", &x, &y);
    for (int i = 1; i < (x * y); i++){
        if (i % x == 0 && i % y == 0){
            printf ("%d\n", i);
            break;
        }
    }
}

int mdc (int x, int y){
    scanf ("%d %d", &x, &y);
    for (int i = (x * y); i > 1; i--){
        if (x % i == 0 && y % i == 0){
            printf ("%d\n", i);
            break;
        }
    }
}

int main () {
    char selecao;
    int x, y;
    printf("Selecione a operacao desejada!\n'A' = MMC\n'B' = MDC\n'C' = Sair da interface\nApos selecionar, digite os numeros da operacao!\n");
    scanf("%c", &selecao);
    switch (selecao){
    case 'A': 
        mmc (x, y);
        break;
    case 'B': 
        mdc (x, y);
    
    case 'C':
        break;
    }
    return 0;
}