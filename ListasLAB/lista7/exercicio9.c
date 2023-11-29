#include <stdio.h>

int mmc (int x, int y){
    scanf ("%d %d", &x, &y);
    for (int i = 1; i < (x * y); i++){
        if (i % x == 0 && i % y == 0){
            printf ("%d\n", i);
            break;
        }
    }
}
int main (){

    int mmcX, mmcY;
    mmc(mmcX, mmcY);

    return 0;
}