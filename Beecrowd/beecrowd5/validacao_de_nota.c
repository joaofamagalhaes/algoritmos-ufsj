#include <stdio.h>

int main(){

    double a, b, c, d, media;
    while (1){
        
        scanf("%lf", &a);        
        if (a < 0 && a > 10){
            printf("nota invalida\n");
        } else {
            c = a;
        }


        scanf("%lf", &b);
        if (b < 0 && b > 10){
            printf("nota invalida\n"); 
        } else {
            d = b;
        }

        if (a > 0 || a < 10 && b > 0 || b < 10){
            media = (c + d) / 2.00;
            printf("media = %.2lf\n", media);
            break;
        }
    }
        
    
    return 0;
}