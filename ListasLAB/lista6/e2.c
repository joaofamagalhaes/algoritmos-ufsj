#include <stdio.h>

int main()
{

    int a, b;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);

    printf("Os numeros primos entre %d e %d sao:\n", a, b);

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < b; j++)
        {
            if (i % j != 0)
            {
                printf("%d eh primo!\n", i);
            }
        }
    }

    return 0;
}

// NAO FINALIZADO