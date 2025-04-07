#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_LINHA 100

double calcular_total(char *nome_arquivo)
{
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    char linha[TAMANHO_LINHA];
    double total = 0.0;

    while (fgets(linha, TAMANHO_LINHA, arquivo) != NULL)
    {
        char nome_produto[50];
        int quantidade;
        double valor_unitario;

        fscanf(linha, "%s,%d,%lf", nome_produto, &quantidade, &valor_unitario);

        total += quantidade * valor_unitario;
    }

    fclose(arquivo);
    return total;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    double totalCompra = calcular_total(argv[1]);
    if (totalCompra != -1)
    {
        printf("O total da compra é: R$ %.2lf\n", totalCompra);
    }

    return 0;
}
