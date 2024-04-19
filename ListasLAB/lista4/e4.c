#include <stdio.h>

int main (){

    double percurso, consumo;
    char carro;

    printf("Informe o tamanho do percurso em KM e depois o tipo de carro, A, B ou C: \n");
    scanf("%lf %c", &percurso, &carro);


    switch (carro){
    case 'A':
        printf("O consumo sera de %.2lf litros\n", consumo = percurso / 12);
        break;
    case 'B':
        printf("O consumo sera de %.2lf litros\n", consumo = percurso / 9);
        break;
    case 'C':
        printf("O consumo sera de %.2lf litros\n", consumo = percurso / 8);
        break;
    default:
        printf("Digite um caractere valido!\n");
        break;
    }

    return 0;
}