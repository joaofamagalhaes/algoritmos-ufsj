#include <stdio.h>

int main (){

    int num;
    char letra;

    printf("Digite um uma letra e, em seguida, o tanto de vezes que ela deve ser impressa: \n");

    scanf("%c %d", &letra, &num);

    for (int i = 1; i <= num; i++){
        printf("%c", letra);
        if (i < num){ 
        printf(",");
        } else if (i == num){
            printf(".\n");
        }
    }

    
    return 0;
}