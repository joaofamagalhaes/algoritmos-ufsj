#include <stdio.h>

int main()
{
    double area;
    double raio;
    double pi = 3.14159;

    scanf ("%lf", &raio);
    area = (raio * raio) * pi;
    printf("A=%.4lf\n", area);

    return 0;
}
