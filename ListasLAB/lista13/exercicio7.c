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

void exibe_filmes(Locadora *l) {
    printf("Lista de Filmes:\n");

    if (l->num_filmes == 0) {
        printf("Nenhum filme disponível.\n");
        return;
    }

    for (int i = 0; i < l->max_filmes; ++i) {
        if (l->filmes[i] != 0) {
            printf("Id: %d\n", l->filmes[i]);
            printf("Titulo: Nome do Filme\n");  
            printf("Ano: Ano do Filme\n");      
            printf("Duração: Duração do Filme min\n\n");  
        }
    }
}

int main() {
    Locadora *minha_locadora = (Locadora *)malloc(sizeof(Locadora));
    minha_locadora->max_filmes = 100;
    minha_locadora->num_filmes = 0;
    minha_locadora->filmes = (int *)calloc(minha_locadora->max_filmes, sizeof(int));

    minha_locadora->filmes[0] = 1;
    minha_locadora->filmes[1] = 2;

    exibe_filmes(minha_locadora);

    free(minha_locadora->filmes);
    free(minha_locadora);

    return 0;
}
