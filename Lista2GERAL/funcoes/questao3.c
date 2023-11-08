#include <stdio.h>

int media_ponderada (int a, int b, int c){
    scanf("%d %d %d", &a, &b, &c);
    int media = (a * 6 + b * 3 + c * 1) / 10;
    printf("%d\n", media);

}


int main () {
    int a_ex, b_ex, c_ex;
    media_ponderada(a_ex, b_ex, c_ex);
    return 0;
}