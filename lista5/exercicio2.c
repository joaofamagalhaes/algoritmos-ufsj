#include <stdio.h>

int main (){

    int num, x = 0;
    scanf("Digite o numero: %d", &num); 
    while (x < num){
        x++;
        printf("%d\n", x);
    }
    return 0;
}