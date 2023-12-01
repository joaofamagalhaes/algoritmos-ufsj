#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAXCLIENTES 50 //numero maximo de clientes
#define MAXPRODUTOS 1000 //numero maximo de produtos diferentes que a loja vende
#define MAXESTOQUE 3 //estoque maximo de cada produto
#define MAXCOMPRAS 20 //numero maximo de produtos que cada cliente pode comprar
#define MAXNOME 100 //numero maximo de caracteres que um nome de cliente pode ter

typedef struct {
    int id;
    int estoque;
    float preco;
} Produto;

typedef struct {
    int id;
    char nome[MAXNOME];
    int ncompras;
    int carrinho[MAXCOMPRAS];
} Cliente;

void initCliente(Cliente *c, char *nome_cliente, int cod) {
    c->id = cod; // designa o valor cod (fornecido na main) como o número identificador do cliente 
    c->ncompras = 0; // dá como valor inicial de todas as compras feitas por um cliente como 0; ainda não foi comprado nada
    strcpy(c->nome, nome_cliente); // copia a string de nome inserida na main para o nome do cliente especificado através do código cod; o cliente de código tal recebe o nome tal
}

void initProduto(Produto *p, int cod) {
    srand(time(NULL)); // randomiza as funções rand que virão através do horário atual do computador; sempre será um número randômico diferente 
    p->id = cod; // assim como clientes, designa um código específico a um produto específico, como num catálogo
    p->estoque = rand() % (MAXESTOQUE + 1); // quantidade aleatória do produto em estoque
    p->preco = rand() % 99 + 1 + ((rand() % 99) % 100)/100.0; // preço aleatório do tal produto
}

int estoqueLoja(Produto p[], int n) {
    int total_produtos_loja = 0; // para contar quantos produtos tem na loja, inicializa a quantidade em 0 para que não comece de um número aleatório da memória
  
    for (int i = 0; i < n; i++) {
        total_produtos_loja += p[i].estoque; // passa por cada produto variando sua posição no vetor recebido da main 
                                             // verifica quantos desse produto tem na loja e os soma a quantidade total
    }

    return total_produtos_loja;
}

// detalhe importante da função simulaCompras: o cliente só pode comprar uma quantidade limitada de produtos de uma vez
// mesmo que o carrinho tenha um número grande de produtos, a compra é limitada e ele terá que fazer várias compras
// quando o número máximo de compras simultâneas é maior que a quantidade de produtos do carrinho, ele faz a última compra e randomicamente enche o carrinho de novo
// esse processo se repete até os produtos da loja acabarem

// ex.: a loja tem 100 produtos, ele enche o carrinho com 40 mas só pode comprar 10 produtos por compra
// compra-se os produtos de 10 em 10 até esgotar o carrinho
// a loja agora possui 60 produtos
// enche o carrinho, compra até esvaziar, repete até a loja ter 0 produtos

void simulaCompras(Cliente *c, Produto p[], int np) {
    int compras = rand() % (MAXCOMPRAS + 1); // número de compras que será feito por um cliente, randomizado
    int estoque_total = estoqueLoja(p, np); // estoque da loja alocado numa variável

    while (estoque_total > 0 && compras > 0) { // função só funciona enquanto o estoque existir (for positivo, tiver produtos) e quando ainda tem compras a serem realizadas
        int prod = rand() % np; // quantos produtos o cliente vai comprar de uma vez, até acabar a quantidade de produtos do carrinho
                                // quando o cliente compra todos os exemplares do carrinho, ele randomiza a quantidade do carrinho novamente e repete até comprar toda a loja

        if (p[prod].estoque > 0) { // trata do estoque dos produtos da loja 
            c->carrinho[c->ncompras] = p[prod].id; // o vator carrinho de 'c->ncompras' elementos ganha o valor da quantidade do produto [prod] em estoque
            c->ncompras++; // um número de itens daquele produto é adicionado ao número de compras feitas pelo cliente 1
            
            p[prod].estoque--; // o estoque do produto, naturalmente, diminui
            estoque_total--; // por consequência, o estoque total também
            compras--; // e o número de compras que podem ser realizadas pelo cliente também
        }
        
    } 
    
}

float totalVendas(Cliente c[], int nclientes, Produto p[]) {
    int faturamento = 0; // conta o faturamento

    for (int i = 0; i < nclientes; i++) { // varia clientes; passa de cliente em cliente
        for (int j = 0; j < c[i].ncompras; j++) { // passa por todo carrinho do cliente da vez; cliente 0 carrinho (produto) 1, carrinho na posição2, carrinho na posição3 etc
            int prod = c[i].carrinho[j]; // produto = cliente numero i de carrinho tamanho j; se o cliente 0 compra 4 produtos; se o cliente 1 compra 19 produtos; etc
            faturamento += p[prod].preco; // soma o preço do produto selecionado dentro do loop ao faturamento total e reinicia o loop até o fim das condições
        }
        
    }
    return faturamento; // retorna o faturamento ao final do loop
}

int premiaCliente(Cliente c[], int nclientes) {
    Cliente vencedor = c[0]; // inicia a struct vencedor com o cliente 0

    for (int i = 0; i < nclientes; i++) { // passa os clientes de 1 em 1 comparando qual comprou mais
        if (c[i].ncompras > vencedor.ncompras) { // se o cliente da vez tiver mais compras que o atual "vencedor", ele se torna o vencedor
            strcpy(vencedor.nome, c[i].nome); // copiamos a string do nome do cliente para a string do nome do vencedor
        }

    }
    printf("%s", vencedor.nome); // imprimimos o nome do vencedor
}

int main() {
    srand(time(NULL));
    
    Cliente clientes[MAXCLIENTES];
    Produto produtos[MAXPRODUTOS];
    int nclientes; 
    int nprods; 
    int i;

    nclientes = rand() % MAXCLIENTES;
    nprods = rand() % MAXPRODUTOS;

    printf("\nnumero clientes: %d", nclientes);

    //inicializa cada cliente do vetor clientes
    char nome[MAXNOME];
    
    for(i=0; i<nclientes; i++) { // inicia a leitura de todos os clientes, uma a um
        fgets(nome, MAXNOME, stdin); //lê o cliente i específico
        nome[strlen(nome)-1]='\0'; //remove quebra de linha da string lida pelo fgets

        initCliente(&clientes[i], nome, i); // linha 106 define 'clientes' como estrutura Cliente na main
        // a função fora da main recebe um Cliente por referência; porém, ao chamar a função na main, vc está falando de um Cliente específico, nesse caso, 'cleintes[i]'
        // linha 118 char nome definida como string para nome dos clientes
    }
    //inicializa cada produto do vetor produtos
    
    for(i=0; i<nprods; i++) {
        initProduto(&produtos[i], i); // similar ao initCliente, a estrutura de Produto na main foi definida como 'produtos', linha 107, produto da posição i
        // não confundir com o segundo parâmetro da função que também chama i, esse segundo i se refere ao código do produto e não a posição no vetor 
    }
    //simula a compra de cada cliente do vetor clientes
    
    for(i=0; i<nclientes; i++) {
        simulaCompras(&clientes[i], produtos, nprods); // mesmo motivo da função initCliente; trata-se de um cliente específico analisado pelo loop
    }
    
    float saldo = totalVendas(clientes, nclientes, produtos);
    printf("\nTotal vendas: %f", saldo);
    //imprime o nome do cliente a ser premiado
    
    premiaCliente(clientes, nclientes); // perceba, na linha 106, como a estrutura 'clientes' não é apenas um estrutura singular mas sim um ponteiro
                                        // onde cada ponteiro é uma estrutura; ex.: temos o clientes[0].id, clientes[0].nome[str], clientes[0].ncompras, clientes[0].carrinho[v]
                                        // do mesmo jeito temos os mesmos parâmetros para o cliente 1, clientes[1].id, clientes[1].nome[str], clientes[1].ncompras, clientes[1].carrinho[v]
                                        // e a lista segue até o último cliente; 
                                        // indo direto ao ponto: por ser uma função que pede diretamente um vetor de clientes 
                                        // (e não apenas um cliente específico E através de referência/ponteiro) 
                                        // basta apenas copiar o nome da estrutura de vetores: 'clientes' e o inteiro que diz quantos clientes tem no vetor, nclientes
    return 0;
}