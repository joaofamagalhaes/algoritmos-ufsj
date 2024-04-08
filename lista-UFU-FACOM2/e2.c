#include <stdio.h>
#include <math.h>

int main () {

    double num, result;

    printf("Digite um numero:\n");
    scanf("%lf", &num);

    if (num >= 0) {
        printf("%lf\n", result = sqrt(num));

    } else printf("Numero invalido!\n");

    return 0;
}