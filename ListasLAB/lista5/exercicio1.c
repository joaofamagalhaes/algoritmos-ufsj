#include <stdio.h>

int main (){
    int x, y;
    for (x = 1; x < 1001; x++){
        if (x % 7 == 0){
            y++;
        }
    }
    printf("%d vezes\n", y);
    return 0;
}