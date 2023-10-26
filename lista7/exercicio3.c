#include <stdio.h>

int conversorSegundos (int segundos){

    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    segundos = s + (m * 60) + (h * 120);

    return segundos;
}



int main (){

    int x = 0;
    x = conversorSegundos(x);
    printf("%d\n", x);


    return 0;
}