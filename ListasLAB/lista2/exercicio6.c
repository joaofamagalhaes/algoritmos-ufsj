#include <stdio.h>

int main () {

    int num1, num2, num3, res, media = 3;
    scanf("%d %d %d", &num1, &num2, &num3);

    res = (num1 + num2 + num3) / media;

    printf("resultado = %d", res);

    return 0;

}