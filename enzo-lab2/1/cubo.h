#ifndef CUBO_h
#define CUBO_H

typedef struct cubo {
    double lado_cubo;
} Cubo;

void iniciar(Cubo *c, double lado_cubo);

double lado(Cubo *c);

double area(Cubo *c);

double volume(Cubo *c);

#endif