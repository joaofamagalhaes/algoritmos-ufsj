#include <stdio.h>

int main (){

    double var1 = 234.345, var2 = 45.698;

    printf("%.6lf - %.6lf\n", var1, var2);
    printf("%.0lf - %.0lf\n", var1, var2);
    printf("%.1lf - %1.1lf\n", var1, var2);
    printf("%.2lf - %.2lf\n", var1, var2);
    printf("%.3lf - %.3lf\n", var1, var2);
    printf("%e - %e\n", var1, var2);
    printf("%E - %E\n", var1, var2);
    printf("%g - %g\n", var1, var2);
    printf("%G - %G\n", var1, var2);

    return 0;
}