#include <stdio.h>

int main (){

    int A[6] = {1, 0, 5, -2, -5, 7};
    int ex = A[0] + A[1] + A[5];
    A[3] = 100;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", A[0], A[1], A[2], A[3], A[4], A[5]);
    printf("%d\n", ex);

    return 0;
}