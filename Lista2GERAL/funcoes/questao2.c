#include <stdio.h>

int eh_triangulo (int a, int b, int c){
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b){
        printf("1\n");
    } else  printf("0\n");

}

int main () {

    int a_ex, b_ex, c_ex;
    eh_triangulo (a_ex, b_ex, c_ex);
    return 0;
}