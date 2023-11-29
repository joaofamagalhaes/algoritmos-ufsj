#include <stdio.h>

int mdc (int x, int y){
    scanf ("%d %d", &x, &y);
    for (int i = (x * y); i > 1; i--){
        if (x % i == 0 && y % i == 0){
            printf ("%d\n", i);
            break;
        }
    }
}
int main (){

    int mdcX, mdcY;
    mdc(mdcX, mdcY);

    return 0;
}