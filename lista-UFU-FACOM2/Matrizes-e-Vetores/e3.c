#include <stdio.h>

int main()
{

    double vetor[10], vetorQuadrado[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorQuadrado[i] = vetor[i] * vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf ", vetor[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%.1lf ", vetorQuadrado[i]);
    }

    printf("\n");

    return 0;
}