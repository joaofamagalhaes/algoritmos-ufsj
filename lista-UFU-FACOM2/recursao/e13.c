#include <stdio.h>

int somaSerie(int i, int j, int k)
{
    if (i <= j)
    {
        printf("%d ", i);
        return somaSerie(i + k, j, k);
    }
    else
        return 1;
}

int main()
{
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    somaSerie(i, j, k);
    return 1;
}