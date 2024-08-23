#include <stdio.h>
#include <string.h>
#define MAX_TAM 100

void intervaloDaString(char *texto, int I, int J)
{
    for (int i = I; i <= J; i++)
    {
        printf("%c, ", texto[i]);
    }
    printf("\n");
}

int main()
{
    char texto[MAX_TAM];
    int j, i;

    fgets(texto, MAX_TAM, stdin);
    scanf("%d %d", &i, &j);

    intervaloDaString(texto, i, j);

    return 0;
}