#include <stdio.h>

int main() {
    
    float numSimples1, numSimples2;
    double numDupla1, numDupla2;

    scanf("%f", &numSimples1);
    scanf("%f", &numSimples2);

  
    scanf("%lf", &numDupla1);
    scanf("%lf", &numDupla2);

    
    printf("A = %.1f, B = %.2f\n", numSimples1, numSimples2);
    printf("C = %.3lf, D = %.4lf\n", numDupla1, numDupla2);

    
    printf("A = %.1f, B = %.1f\n", numSimples1, numSimples2);
    printf("C = %.1lf, D = %.1lf\n", numDupla1, numDupla2);

    
    printf("A = %.2f, B = %.2f\n", numSimples1, numSimples2);
    printf("C = %.2lf, D = %.2lf\n", numDupla1, numDupla2);

    
    printf("A = %.3f, B = %.3f\n", numSimples1, numSimples2);
    printf("C = %.3lf, D = %.3lf\n", numDupla1, numDupla2);

    
    printf("A = %.3e, B = %.3e\n", numSimples1, numSimples2);
    printf("C = %.3e, D = %.3e\n", numDupla1, numDupla2);

    
    printf("A = %d, B = %d\n", (int)numSimples1, (int)numSimples2);
    printf("C = %d, D = %d\n", (int)numDupla1, (int)numDupla2);

    return 0;
}
