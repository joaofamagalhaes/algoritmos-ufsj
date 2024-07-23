#include <stdio.h>

int mdc(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int primos_entre_si(int x, int y)
{
    if (mdc(x, y) == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int x, y;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    if (primos_entre_si(x, y))
        printf("Primos entre si!\n");
    else
        printf("Nao sao primos entre si!\n");

    return 0;
}