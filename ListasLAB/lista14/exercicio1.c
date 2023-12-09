#include <stdio.h>

void piramide(int n) {
    if (n > 0) {
        piramide(n - 1);
        for (int i = 0; i < n; i++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    
    piramide(5);

    return 0;
}
