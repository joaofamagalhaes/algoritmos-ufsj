#include <stdio.h>

int main()
{

    int quant, x, y, soma = 0;

    scanf("%d", &quant);

    for (int t = 0; t < quant; t++)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    soma = i + soma;
                    printf("%d\n", soma);
                }
            }
        }
        else
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 == 1)
                {
                    soma = i + soma;
                    printf("%d\n", soma);
                }
            }
        }

        return 0;
    }