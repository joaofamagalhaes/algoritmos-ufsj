#include <stdio.h>
#include <string.h>
#define MAX_TAM 100

int contaVogais(char *texto)
{
    int tamanho = strlen(texto), contagem = 0;
    for (int i = 0; i <= tamanho; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            contagem++;
        }
    }
    return contagem;
}

int main()
{
    char texto[MAX_TAM];
    fgets(texto, MAX_TAM, stdin);
    printf("%d\n", contaVogais(texto));

    return 0;
}