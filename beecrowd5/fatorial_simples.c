#include <stdio.h>

int main (){

    int num, fat = 1;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        fat = fat * (i + 1);
    }
    printf("%d\n", fat);
    return 0;
}