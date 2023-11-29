#include <stdio.h>

double volumeEsfera (double volume){
    double raio;
    scanf("%lf", &raio);
    volume = (4 * 3.14 * (raio * raio * raio))/ 3;

    return volume;
}

int main (){
    double volume = 0.0; 
    volume = volumeEsfera (volume);
    printf("%.2lf", volume);
    
    return 0;
}