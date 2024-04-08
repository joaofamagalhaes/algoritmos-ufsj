#include <stdio.h>

int main () {

    int num1, num2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("Numero maior eh %d\n", num1);
    } else printf("Numero maior eh %d\n", num2);

    return 0;
}