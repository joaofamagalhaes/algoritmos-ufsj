#include <stdio.h>
#include <math.h>

struct coordenada {
    float x;
    float y;
};

double distancia (struct coordenada x, struct coordenada y){
    
    printf("Digite 'x1' e 'x2' e em seguida 'y1' e 'y2': \n");
    scanf("%f %f", &x.x, &y.x);
    scanf("%f %f", &x.y, &y.y);
    double d = sqrt(pow(x.x - y.x, 2) + pow(x.y - y.y, 2));

    return d;
}

int main (){

    struct coordenada x;
    struct coordenada y;
    double distanciaf = distancia(x, y);
    printf("Distancia = %.2lf\n", distanciaf);

    return 0;
}