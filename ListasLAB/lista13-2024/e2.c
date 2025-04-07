#include <stdio.h>
#include <stdlib.h>

void concatenaArquivos(const char *arquivo1, const char *arquivo2, const char *arquivoDestino)
{
    FILE *f1 = fopen(arquivo1, "r");
    if (f1 == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", arquivo1);
        exit(1);
    }

    FILE *f2 = fopen(arquivo2, "r");
    if (f2 == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", arquivo2);
        fclose(f1);
        exit(1);
    }

    FILE *fDestino = fopen(arquivoDestino, "w");
    if (fDestino == NULL)
    {
        printf("Erro ao criar o arquivo %s.\n", arquivoDestino);
        fclose(f1);
        fclose(f2);
        exit(1);
    }

    char caractere;
    while ((caractere = fgetc(f1)) != EOF)
    {
        fputc(caractere, fDestino);
    }

    while ((caractere = fgetc(f2)) != EOF)
    {
        fputc(caractere, fDestino);
    }

    fclose(f1);
    fclose(f2);
    fclose(fDestino);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: %s <arquivo1> <arquivo2>\n", argv[0]);
        return 1;
    }

    concatenaArquivos(argv[1], argv[2], "concatenacao.txt");

    printf("Arquivos concatenados com sucesso em 'concatenacao.txt'.\n");

    return 0;
}
