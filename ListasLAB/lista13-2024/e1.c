#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", argv[1]);
        return 1;
    }

    int linhas = 0;
    char caractere;

    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            linhas++;
        }
    }

    fclose(arquivo);

    printf("O arquivo '%s' possui %d linhas.\n", argv[1], linhas);

    return 0;
}
