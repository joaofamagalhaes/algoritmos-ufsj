#include <stdio.h>
#include <stdlib.h>

void maiorQ10(double **matriz, int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] > 10)
            {
                printf("%.2lf\n", matriz[i][j]);
            }
        }
    }
}

int main()
{

    int numLinhas;
    scanf("%d", &numLinhas);

    double **matriz = (double **)malloc(numLinhas * sizeof(double *));
    for (int i = 0; i < numLinhas; i++)
    {
        matriz[i] = (double *)malloc(10 * sizeof(double));
    }

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < numLinhas; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    maiorQ10(matriz, numLinhas);

    for (int i = 0; i < numLinhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}