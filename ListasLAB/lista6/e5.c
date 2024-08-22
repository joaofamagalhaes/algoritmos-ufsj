#include <stdio.h>

int calcularMDC(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcularMMC(int a, int b)
{
    return (a * b) / calcularMDC(a, b);
}

int ehPrimo(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int maiorPrimoDivisor(int a, int b)
{
    int mdc = calcularMDC(a, b);
    int maiorPrimo = 1;
    for (int i = 2; i <= mdc; i++)
    {
        if (mdc % i == 0 && ehPrimo(i))
        {
            maiorPrimo = i;
        }
    }
    return maiorPrimo;
}

int main()
{
    int a, b;
    int opcao;

    printf("Digite dois numeros inteiros: ");
    scanf("%d", &a);
    scanf("%d", &b);

    do
    {
        printf("\nMenu de Opcoes:\n");
        printf("1. Calcular o minimo multiplo comum (MMC)\n");
        printf("2. Calcular o maximo divisor comum (MDC)\n");
        printf("3. Calcular o maior numero primo que divide ambos\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("O MMC entre %d e %d e: %d\n", a, b, calcularMMC(a, b));
            break;
        case 2:
            printf("O MDC entre %d e %d e: %d\n", a, b, calcularMDC(a, b));
            break;
        case 3:
            printf("O maior numero primo que divide ambos %d e %d e: %d\n", a, b, maiorPrimoDivisor(a, b));
            break;
        case 4:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
