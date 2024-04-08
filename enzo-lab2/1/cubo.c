#include <stdio.h>
#include "cubo.h"

void iniciar(Cubo *c, double lado_cubo){
    c->lado_cubo = lado_cubo;
}

double lado(Cubo *c){
    return c->lado_cubo;
}

double area(Cubo *c){
    return 6 * c->lado_cubo * c->lado_cubo;
}

double volume(Cubo *c) {
    return c->lado_cubo * c->lado_cubo * c->lado_cubo;
}