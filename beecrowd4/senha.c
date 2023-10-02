#include <stdio.h>

int main (){

    int senha, senhaCerta = 2002;
    
    while (1){
        scanf("%d", &senha);
        if (senha == senhaCerta){
            printf ("Acesso Permitido\n");
            break;
            }else{
                printf("Senha Invalida\n"); 
                continue;
                }
    }
    return 0;
}