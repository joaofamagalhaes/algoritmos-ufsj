#include <stdio.h>

int main()
{

    double alunos[15];
    double mediaNotas = 0;

    for (int i = 0; i < 15; i++)
    {
        scanf("%lf", &alunos[i]);
        mediaNotas += alunos[i];
    }

    printf("Media geral = %.2lf\n", mediaNotas / 15);

    return 0;
}