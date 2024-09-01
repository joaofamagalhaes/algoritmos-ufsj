#include <stdio.h>

int main()
{
    int matriz[9][9];

    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < 9; i++)
    {
        printf("|");
        // imprime cada linha
        for (int j = 0; j < 9; j++)
        {
            printf("  A%d%d  ", i, j);
            if ((j + 1) % 3 == 0)
            {
                printf("|");
            }
        }
        printf("\n");
        if ((i + 1) % 3 == 0)
        {
            printf("-------------------------------------------------------------------\n");
        }
    }

    return 0;
}
