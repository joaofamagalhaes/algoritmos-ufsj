#include <stdio.h>

int maior_primo (int x, int y){
    scanf ("%d %d", &x, &y);
    for (int i = 2; i * i <= x && i * i <= y ; i++) {
        if (x % i != 0 && y % i != 0){
                printf ("%d\n", i);
            }

        }
    }
}

int main (){

    int x, y;
    maior_primo (x, y);
    return 0;
}