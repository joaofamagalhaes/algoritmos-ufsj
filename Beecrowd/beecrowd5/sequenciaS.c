#include <stdio.h>

int main (){

    double numS;
    for (double i = 1; i <= 100; i++){
        numS = numS + 1/i; 
    }
    printf("%.2lf\n", numS);
    return 0;
}

//programa nao rodou no beecrowd, porém, funciona