#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

   
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}
