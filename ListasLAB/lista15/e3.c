#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplica_string(char str[])
{
    char *nova_str = (char *)malloc((strlen(str) + 1) * sizeof(char));
    if (nova_str == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    strcpy(nova_str, str);
    return nova_str;
}

int main()
{
    char str[] = "Exemplo";
    char *copia = duplica_string(str);
    printf("Copia da string: %s\n", copia);
    free(copia);
    printf("Memoria liberada com sucesso.\n");
    return 0;
}
