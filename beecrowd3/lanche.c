#include <stdio.h>

int main (){

    int item, qntd;
    double total;

    scanf("%d %d", &item, &qntd);

    if (item == 1 ){
        
        total = qntd * 4.00;
    }
    
    if (item == 2 ){

        total = qntd * 4.5;
    }
    
    if (item == 3 ){
        
        total = qntd * 5.0;
    }
    
    if (item == 4 ){
        
        total = qntd * 2.0;
    }
    
    if (item == 5 ){

        total = qntd * 1.5;    
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}