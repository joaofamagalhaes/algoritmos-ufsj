#include <stdio.h>
#include <stdlib.h>

int somatorio(int n)
{
    if (n > 1)
        return n + somatorio(n - 1);
    else
        return 1;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", somatorio(num));

    return 1;
}
