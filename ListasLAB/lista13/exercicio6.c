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

void insere_cliente(Locadora *l, int id, char *nome, char *endereco) {
    if (l->num_clientes < l->max_clientes) {
        int posicao_vazia = -1;
        for (int i = 0; i < l->max_clientes; ++i) {
            if (l->clientes[i] == 0) {
                posicao_vazia = i;
                break;
            }
        }

        if (posicao_vazia != -1) {
            l->clientes[posicao_vazia] = id;
            l->num_clientes++;

            printf("Cliente inserido com sucesso!\n");
        } else {
            printf("Não há mais espaço para novos clientes na locadora.\n");
        }
    } else {
        printf("Não há mais espaço para novos clientes na locadora.\n");
    }
}

int main() {
    Locadora *minha_locadora = (Locadora *)malloc(sizeof(Locadora));
    minha_locadora->max_clientes = 50;
    minha_locadora->num_clientes = 0;
    minha_locadora->clientes = (int *)calloc(minha_locadora->max_clientes, sizeof(int));

    insere_cliente(minha_locadora, 1, "Cliente1", "Endereco1");
    insere_cliente(minha_locadora, 2, "Cliente2", "Endereco2");

    free(minha_locadora->clientes);
    free(minha_locadora);

    return 0;
}
