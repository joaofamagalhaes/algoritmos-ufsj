#include <stdio.h>
#include <string.h>
#define MAX_TAM 100

void substituir(char *texto, char letra)
{
    int tamanho = strlen(texto);
    for (int i = 0; i <= tamanho; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            texto[i] = letra;
        }
    }

    printf("%s", texto);
}

int main()
{
    char texto[MAX_TAM], letra;
    fgets(texto, MAX_TAM, stdin);
    scanf("%c", &letra);

    substituir(texto, letra);

    return 0;
}