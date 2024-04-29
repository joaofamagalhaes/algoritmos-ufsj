#include <stdio.h>

int main (){

    int num, cont = 0; 
    double media = 0;

    printf("Digite um numero positivo para inciar a contagem: \n");
    scanf("%d", &num);

while (num >= 0) {
        cont++;
        media += num;
        scanf("%d", &num);
    };

    if (cont > 0){
        printf("%d numeros positivos\n", cont);
        printf("A media eh %.2lf\n", media = media / cont);
    }
    

    return 0;
}