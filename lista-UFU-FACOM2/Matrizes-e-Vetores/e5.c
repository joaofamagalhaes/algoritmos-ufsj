#include <stdio.h>

int main()
{
    int vetor[10], cont = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            cont++;
        }
    }

    printf("%d\n", cont);
    return 0;
}