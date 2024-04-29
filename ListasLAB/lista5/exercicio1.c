#include <stdio.h>

int main (){

    int cont = 0;
    for (int i = 0; i <= 1000; i++){ 
        if (i % 7 == 0) cont++;
    }

    printf("%d vezes\n", cont);
    return 0;
}