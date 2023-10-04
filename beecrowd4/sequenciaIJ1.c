#include <stdio.h>

int main (){

    int i = 1, j = 60;
    for(int k = 0; k <= 12; k++){
        printf("I=%d J=%d\n", i, j);
        i = i+3;
        j = j-5;
    }


    return 0;
}