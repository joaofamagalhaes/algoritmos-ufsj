#include <stdio.h>
#include<math.h>

typedef struct coordenada{
    int x,y;
}coord;

typedef struct Triangulo{
  coord p1;
  coord p2;
  coord p3;
}triangulo;


void tipo_triangulo(struct Triangulo x)
{
    int lado1 = sqrt(pow(x.p1.x - x.p2.x, 2) + pow(x.p1.y - x.p2.y, 2));
    int lado2 = sqrt(pow(x.p2.x - x.p3.x, 2) + pow(x.p2.y - x.p3.y, 2));
    int lado3 = sqrt(pow(x.p3.x - x.p1.x, 2) + pow(x.p3.y - x.p1.y, 2));

    if(lado1 == lado2 && lado1 == lado3){
        printf("O triangulo eh equilatero\n");
    }else if(lado1 != lado2 && lado2 != lado3){
        printf("O triangulo eh escaleno\n"); 
    }else{
        printf("O triangulo eh isosceles\n");
    }
};

int main(){
    triangulo t;
    printf("Digite a primeira cordenada\n");
    scanf("%d %d", &t.p1.x,&t.p1.y);
    printf("Digite a segunda cordenada\n");
    scanf("%d %d", &t.p2.x,&t.p2.y);
    printf("Digite a terceira cordenada\n");
    scanf("%d %d", &t.p3.x,&t.p3.y);

    tipo_triangulo(t);
}
