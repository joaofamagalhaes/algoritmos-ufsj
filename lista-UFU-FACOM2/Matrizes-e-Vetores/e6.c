#include <stdio.h>

int main()
{

    int vetor[10];
    int maior, menor;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("menor = %d\n", menor);
    printf("maior = %d\n", maior);

    return 0;
}