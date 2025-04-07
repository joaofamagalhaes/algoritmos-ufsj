#include <stdio.h>
#include <stdlib.h>

int num_vogais_arquivo(char *nome_arq)
{
    FILE *arquivo = fopen(nome_arq, "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", nome_arq);
        return -1;
    }

    int contador = 0;
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U')
        {
            contador++;
        }
    }

    fclose(arquivo);
    return contador;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    int numVogais = num_vogais_arquivo(argv[1]);
    if (numVogais != -1)
    {
        printf("O arquivo '%s' possui %d vogais.\n", argv[1], numVogais);
    }

    return 0;
}
