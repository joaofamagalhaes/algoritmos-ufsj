#include <stdio.h>

int main (){

    int senha = 54321, tentativa;

    printf("DIGITE A SENHA: \n");
    scanf("%d", &tentativa);

    while (tentativa != senha){
        printf("ACESSO NEGADO\n");
        scanf("%d", &tentativa);
    }
    
    if (tentativa == senha) {
        printf("ACESSO PERMITIDO\n");
    }

    return 0;
}   