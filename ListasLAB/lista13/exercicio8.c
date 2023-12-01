#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int max_filmes;
    int max_clientes;
    int max_locacoes;

    int *filmes;
    int *clientes;
    int *locacoes;

    int num_filmes;
    int num_clientes;
    int num_locacoes;
} Locadora;

void destroi_locadora(Locadora *l) {
    free(l->filmes);
    free(l->clientes);
    free(l->locacoes);

    free(l);
}

int main() {

    Locadora *minha_locadora = (Locadora *)malloc(sizeof(Locadora));
    minha_locadora->max_filmes = 100;
    minha_locadora->num_filmes = 0;
    minha_locadora->filmes = (int *)calloc(minha_locadora->max_filmes, sizeof(int));


    destroi_locadora(minha_locadora);

    return 0;
}
