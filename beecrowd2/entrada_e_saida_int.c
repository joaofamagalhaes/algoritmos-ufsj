#include <stdio.h>

int main (){

    int num1, num2, num3;
    -1000 <= num1 <= 1000;
    0 <= num2 <= 99;
    0 <= num3 <= 999; 

    scanf("%d %d %d", &num1, &num2, &num3);

    printf("A = %d, B = %d, C = %d\n", num1, num2, num3);
    printf("A = %10d, B = %10d, C = %10d\n", num1, num2, num3);
    printf("A = %010d, B = %010d, C = %010d\n", num1, num2, num3);
    printf("A = %-10d, B = %-10d, C = %-10d\n", num1, num2, num3);

    return 0;
}