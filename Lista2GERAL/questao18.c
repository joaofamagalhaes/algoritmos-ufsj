#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int id_guerreiro;
    int ataque;
    int defesa;
    int carisma;
    int pontos_de_vida;
} Guerreiro;

void criaGuerreiro (Guerreiro *g, Guerreiro aux, int id){
    g->ataque = rand()%6 + 1;
    g->carisma = rand()%6 + 1;
    g->defesa = rand()%6 + 1;
    aux.pontos_de_vida = (rand()%6 + 1) + (rand()%6 + 1) + (rand()%6 + 1);
    aux.id_guerreiro = id;

    printf("Ataque %d\n", g->ataque);
    printf("Carisma %d\n", g->carisma);
    printf("Defesa %d\n", g->defesa);
    printf("Vida %d\n", aux.pontos_de_vida);
    printf("Identidade %d\n", aux.id_guerreiro);
}


int main () {
    srand(time(NULL));

    Guerreiro aux;
     int auxid = 5;
    
    criaGuerreiro(&aux, aux, auxid);

    return 0;
}