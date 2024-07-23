#include <stdio.h>

int soma_divisores(int a)
{
    int temp = 0;

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            temp = temp + i;
        }
    }
    return temp;
}

int main()
{
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    printf("A soma dos divisores eh: %d\n", soma_divisores(num));

    return 0;
}