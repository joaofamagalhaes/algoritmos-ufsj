#include <stdio.h>

int decrescente(int num)
{
    if (num > 0)
    {
        printf("%d ", num);
        decrescente(num - 1);
    }
    else
        return 1;
}

int main()
{
    int num;
    scanf("%d", &num);
    decrescente(num);
    printf("\n");
    return 1;
}