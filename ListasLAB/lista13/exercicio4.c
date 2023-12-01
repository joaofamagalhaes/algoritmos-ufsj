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

Locadora *cria_locadora(int max_filmes, int max_clientes, int max_locacoes) {
    Locadora *locadora = (Locadora *)malloc(sizeof(Locadora));

    if (locadora == NULL) {
        perror("Erro ao alocar memória para Locadora");
        exit(EXIT_FAILURE);
    }

    locadora->max_filmes = max_filmes;
    locadora->max_clientes = max_clientes;
    locadora->max_locacoes = max_locacoes;

    locadora->filmes = (int *)malloc(sizeof(int) * max_filmes);
    locadora->clientes = (int *)malloc(sizeof(int) * max_clientes);
    locadora->locacoes = (int *)malloc(sizeof(int) * max_locacoes);

    if (locadora->filmes == NULL || locadora->clientes == NULL || locadora->locacoes == NULL) {
        perror("Erro ao alocar memória para vetores");
        exit(EXIT_FAILURE);
    }

    locadora->num_filmes = 0;
    locadora->num_clientes = 0;
    locadora->num_locacoes = 0;

    return locadora;
}

int main() {
    Locadora *minha_locadora = cria_locadora(100, 50, 200);


    free(minha_locadora->filmes);
    free(minha_locadora->clientes);
    free(minha_locadora->locacoes);
    free(minha_locadora);

    return 0;
}
