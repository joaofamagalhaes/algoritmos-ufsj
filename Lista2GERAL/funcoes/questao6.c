#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rola_dados (int d1, int d2, int d3){
    d1 = (rand () % 6) + 1;
    d2 = (rand () % 6) + 1;
    d3 = (rand () % 6) + 1;
    int soma = d1 + d2 + d3;
    printf ("%d\n", soma);
}

int main () {
    int ex1, ex2, ex3;
    srand(time(NULL));
    rola_dados(ex1, ex2, ex3);


    return 0;
}