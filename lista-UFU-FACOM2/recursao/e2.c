#include <stdio.h>

int fatorial(int n)
{
    if (n > 1)
        return n * fatorial(n - 1);
    else
        return 1;
}

int main()
{

    int num;
    scanf("%d", &num);
    printf("%d\n", fatorial(num));

    return 1;
}