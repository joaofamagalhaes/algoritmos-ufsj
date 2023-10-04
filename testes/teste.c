#include <stdio.h>

int main (){

    float x = 3.0f;
    float y = 2.0f;
    
    int z = (x < y);
    if(!z){
        printf("%.2f\n", x);
    }
    return 0;
}