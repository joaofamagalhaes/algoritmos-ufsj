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

void insere_filme(Locadora *l, int id, char *nome, int ano, int duracao) {
    if (l->num_filmes < l->max_filmes) {
        int posicao_vazia = -1;
        for (int i = 0; i < l->max_filmes; ++i) {
            if (l->filmes[i] == 0) {
                posicao_vazia = i;
                break;
            }
        }

        if (posicao_vazia != -1) {
            l->filmes[posicao_vazia] = id;
            l->num_filmes++;

            printf("Filme inserido com sucesso!\n");
        } else {
            printf("Não há mais espaço para novos filmes na locadora.\n");
        }
    } else {
        printf("Não há mais espaço para novos filmes na locadora.\n");
    }
}

int main() {
    Locadora *minha_locadora = (Locadora *)malloc(sizeof(Locadora));
    minha_locadora->max_filmes = 100;
    minha_locadora->num_filmes = 0;
    minha_locadora->filmes = (int *)calloc(minha_locadora->max_filmes, sizeof(int));

    insere_filme(minha_locadora, 1, "Filme1", 2020, 120);
    insere_filme(minha_locadora, 2, "Filme2", 2021, 90);

    free(minha_locadora->filmes);
    free(minha_locadora);

    return 0;
}
