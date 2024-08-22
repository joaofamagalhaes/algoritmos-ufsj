#include <stdio.h>

int main()
{
    int v[10];
    int maior, posicao = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &v[i]);
    }

    maior = v[0];

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
        if (v[i] > maior)
        {
            maior = v[i];
            posicao = i;
        }
    }

    printf("\n");

    printf("maior %d posicao %d\n", maior, posicao);

    return 0;
}