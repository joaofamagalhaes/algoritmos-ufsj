#include <stdio.h>
#include <math.h>

int main () {

    double num, result;

    printf("Digite um numero:\n");
    scanf("%lf", &num);

    if (num >= 0) {
        printf("%.2lf\n", result = sqrt(num));

    } else printf("%.2lf\n", result = num * num);

    return 0;
}