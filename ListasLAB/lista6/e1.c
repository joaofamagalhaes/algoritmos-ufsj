#include <stdio.h>

int main()
{
    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
            if (j < i)
            {
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}
