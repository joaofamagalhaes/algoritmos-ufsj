#include <stdio.h>

int numPerfeito(int n){
    int div = 0;
    for(int i = 1; i < n; i++){
        if (n % i == 0){
            div += i;
            printf("%d\n", div);
        }
    }
}

int main (){
    int n;
    scanf("%d", &n);
    numPerfeito(n);

    return 0;
}