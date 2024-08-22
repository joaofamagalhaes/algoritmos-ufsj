#include <stdio.h>

int main()
{

    int vetor[8];
    int posX, posY, soma;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d %d", &posX, &posY);

    printf("%d\n", soma = vetor[posX] + vetor[posY]);

    return 0;
}