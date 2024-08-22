#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;

    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % x == 0)
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    return 0;
}