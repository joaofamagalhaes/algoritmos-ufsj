#include <stdio.h>

int main()
{

    int A[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &A[i]);
    }

    int soma = A[0] + A[1] + A[5];
    printf("Soma = %d\n", soma);

    scanf("%d", &A[4]);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}