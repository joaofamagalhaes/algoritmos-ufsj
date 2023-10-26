#include <stdio.h>

struct filmes {
    int id;
    int ano;
    int duracao;
};

int main () {

    struct filmes film1;
    
    printf("Digite a id, o ano e a duracao do filme em questao:\n");
    scanf("%d %d %d", &film1.id, &film1.ano, &film1.duracao);
    printf("\nCodigo do filme: %d", film1.id);
    printf("\nAno de lancamento: %d", film1.ano);
    printf("\nDuracao do filme: %d\n", film1.duracao);
    
    return 0;
}

