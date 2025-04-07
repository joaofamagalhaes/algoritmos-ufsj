#include <stdio.h>
#include <stdlib.h>

int *cria_inteiro(int n)
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
    *ptr = n;
    return ptr;
}

int main()
{
    int *p = cria_inteiro(10);
    printf("Valor do inteiro: %d\n", *p);
    free(p);
    printf("Memoria liberada com sucesso.\n");

    return 0;
}
