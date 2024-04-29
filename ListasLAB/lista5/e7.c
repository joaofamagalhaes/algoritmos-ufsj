#include <stdio.h>

int main () {

    int termo1 = 0, termo2 = 1, termo3, n;
    termo3 = termo1 + termo2;

    printf("Digite o termo de Fibonacci que voce deseja saber: \n");
    scanf("%d", &n);
    
    printf("%d ", termo1);
    printf("%d ", termo2);

    for(int i = 2; i < n; i++){
        printf("%d ", termo3);
        termo1 = termo2;
        termo2 = termo3;
        termo3 = termo1 + termo2;

    }
    printf("\n");

    return 0;
}