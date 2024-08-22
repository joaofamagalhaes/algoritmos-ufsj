#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    for (int i = x; i <= y; i++)
    {

        printf("Tabuada do %d:\n", i);

        for (int j = 1; j <= 10; j++)
        {

            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}