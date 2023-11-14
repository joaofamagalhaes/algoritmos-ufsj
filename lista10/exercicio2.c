#include <stdio.h>

void zeraNegativos (int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\n", v[i]);
    }
   printf("\n");
    for (int i = 0; i < n; i++){
        if(v[i] < 0){ 
        v[i] = 0;
        }
        printf("%d\n", v[i]);
    }
}

int main (){

    int v[] = {-1, -2, -3, 4, 6, 5};
    zeraNegativos(v, 6);
    return 0;
}