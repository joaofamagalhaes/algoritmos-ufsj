#include <stdio.h>

int main (){

    int numN, fatorial = 1;

    printf("Digite o fatorial a ser feito: \n");
    scanf("%d", &numN);

    for (; numN > 1; numN--){
        fatorial = fatorial * numN;
    }

    printf("%d\n", fatorial);

    return 0;
}