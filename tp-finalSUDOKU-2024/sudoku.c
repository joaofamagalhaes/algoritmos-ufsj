#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// se tratando das matrizes, cada i em loop é uma coluna enquanto cada j é uma linha //

// declaracao de todas as funcoes e variaveis globais:
int puzzle[9][9];
int totalRecordes = 0;
FILE *js;
time_t tempoInicio, tempoFim; // variaveis para medir o tempo

// estrutura para guardar os nomes e o tempo (em segundos) de resolucao do puzzle
typedef struct
{
    char nome[50];
    int tempo;
} Recordes;
Recordes recordes[3];

void criaPuzzle(int num);
void imprimePuzzle();
int ehValido();
int resolucaoSudoku();
int menuJogo();
int verificaSudoku();
void salvarTempos();
void carregarTempos();
void verificarSalvarRecorde();

// inicializa um puzzle de forma aleatoria
void criaPuzzle(int num)
{

    // inicia a matriz com 0s
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            puzzle[i][j] = 0;
        }
    }
    // resolve o sudoku
    resolucaoSudoku(0, 0);

    // apaga alguns numeros, definindo a dificuldade
    switch (num)
    {
    case 1:
        for (int i = 1; i <= 54; i++)
        {
            int linha, coluna;
            do
            {
                linha = rand() % 9;
                coluna = rand() % 9;

            } while (puzzle[linha][coluna] == 0);
            puzzle[linha][coluna] = 0;
        }
        break;
    case 2:
        for (int i = 1; i <= 63; i++)
        {
            int linha, coluna;
            do
            {
                linha = rand() % 9;
                coluna = rand() % 9;

            } while (puzzle[linha][coluna] == 0);
            puzzle[linha][coluna] = 0;
        }

        break;

    case 3:
        for (int i = 1; i <= 72; i++)
        {
            int linha, coluna;
            do
            {
                linha = rand() % 9;
                coluna = rand() % 9;

            } while (puzzle[linha][coluna] == 0);
            puzzle[linha][coluna] = 0;
        }

        break;
    }
};

// imprime o jogo de forma organizada e visivel no cmd
void imprimePuzzle()
{
    printf("\n-------------------------------\n");

    for (int i = 0; i < 9; i++)
    {
        printf("|");
        // imprime cada linha
        for (int j = 0; j < 9; j++)
        {
            printf(" %d ", puzzle[i][j]);
            if ((j + 1) % 3 == 0)
            {
                printf("|");
            }
        }
        // imprime uma divisao a cada tres linhas
        printf("\n");
        if ((i + 1) % 3 == 0)
        {
            printf("-------------------------------\n");
        }
    }
};

// essa  funcao seguinte verifica se nao ha valores repetidos na coluna e linha da matriz, checa tambem as submatrizes 3x3
int ehValido(int linha, int coluna, int num)
{
    // checa linha
    for (int i = 0; i < 9; i++)
    {
        if (puzzle[linha][i] == num)
        {
            return 0;
        }
    }

    // checa coluna
    for (int i = 0; i < 9; i++)
    {
        if (puzzle[i][coluna] == num)
        {
            return 0;
        }
    }

    // checa a submatriz 3x3
    int subLinha = (linha / 3) * 3;
    int subColuna = (coluna / 3) * 3;
    for (int i = subLinha; i < subLinha + 3; i++)
    {
        for (int j = subColuna; j < subColuna + 3; j++)
        {
            if (puzzle[i][j] == num)
            {
                return 0;
            }
        }
    }

    return 1;
}

// essa funcao traz a resolucao do sudoku, podendo servir como gabarito e ajudando na criacao do problema
int resolucaoSudoku(int linha, int coluna)
{

    if (linha == 9)
    {
        return 1;
    }

    if (coluna == 9)
    {
        return resolucaoSudoku(linha + 1, 0);
    }

    if (puzzle[linha][coluna] != 0)
    {
        return resolucaoSudoku(linha, coluna + 1);
    }

    for (int num = 1; num <= 9; num++)
    {
        if (ehValido(linha, coluna, num))
        {
            puzzle[linha][coluna] = num;
            if (resolucaoSudoku(linha, coluna + 1))
            {
                return 1;
            }
            puzzle[linha][coluna] = 0;
        }
    }
    return 0;
}

// funcao que imprime o menu principal e da as opcoes
int menuPrincipal()
{
    int resposta, num;

    printf("\n                    MENU PRINCIPAL    \n");
    printf("            -------------------------------\n");
    printf("       Digite o numero relacionado a opcao desejada:   \n");
    printf("            -------------------------------\n");

    printf("                1 - Iniciar novo jogo\n");
    printf("                2 - Jogo salvo\n");
    printf("                3 - Melhores tempos\n");
    printf("                4 - Sair\n");

    scanf("%d", &resposta);

    switch (resposta)
    {
    case 1:
        printf("Escolha o nivel de dificuldade:\n");
        printf("1 - facil\n");
        printf("2 - medio\n");
        printf("3 - dificil\n");
        scanf("%d", &num);
        criaPuzzle(num);
        tempoInicio = time(NULL);
        menuJogo();
        break;
    case 2:
        js = fopen("jogoSalvo.txt", "r");
        if (js == NULL)
            printf("Não foi possivel abrir o jogo salvo OU ele não existe!\n");
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                fscanf(js, "%d", &puzzle[i][j]);
            }
        }
        fclose(js);
        tempoInicio = time(NULL);
        menuJogo();
        break;
    case 3:
        break;
    case 4:
        printf("Obrigado por jogar!\n");
        return 1;
        break;
    default:
        printf("Opcao invalida!\n\n");
        menuPrincipal();
    }
}

// funcao de "menu" a partir do jogo iniciado, da diversas opcoes ao jogador
int menuJogo()
{
    int resposta, linha, coluna, verif;
    imprimePuzzle();

    printf("\n\n1 - Selecionar numero a ser preenchido\n");
    printf("2 - Remover numero\n");
    printf("3 - Verificar\n");
    printf("4 - Ver resultado\n");
    printf("5 - Salvar jogo e sair\n");
    printf("6 - Sair\n");

    scanf("%d", &resposta);

    switch (resposta)
    {
    case 1:
        printf("\nDigite a coluna e a linha que voce deseja alterar: \n");
        scanf("%d %d", &coluna, &linha);

        if (puzzle[linha][coluna] == 0)
        {
            printf("Digite o numero que deseja inserir: \n");
            scanf("%d", &resposta);
            if (resposta > 9 || resposta < 1)
            {
                printf("Numero invalido, digite um numero de 1 a 9!\n\n");
                menuJogo();
            }
            else
            {
                puzzle[linha][coluna] = resposta;
                menuJogo();
            }
        }
        else
        {
            printf("Posicao invalida!\n\n");
            menuJogo();
        }
        break;

    case 2:
        printf("\nDigite a coluna e a linha que voce deseja remover: \n");
        scanf("%d %d", &coluna, &linha);
        if (puzzle[linha][coluna] != 0)
        {
            puzzle[linha][coluna] = 0;
            menuJogo();
        }
        else
        {
            printf("Posicao invalida!\n\n");
            menuJogo();
        }
        break;

    case 3:
        verif = verificaSudoku();
        if (verif)
        {
            tempoFim = time(NULL);
            int tempoDecorrido = (int)difftime(tempoFim, tempoInicio);
            printf("Parabens! Voce completou o Sudoku corretamente em %d segundos!\n", tempoDecorrido);
            verificarSalvarRecorde(tempoDecorrido);
        }
        else
        {
            printf("O Sudoku ainda nao esta completo OU esta incorreto. Continue tentando!\n");
        }
        menuJogo();
        break;

    case 4:
        resolucaoSudoku(0, 0);
        imprimePuzzle();
        break;
    case 5:
        js = fopen("jogoSalvo.txt", "w");
        if (js == NULL)
            printf("Não foi possivel salvar o jogo!\n");

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                fprintf(js, " %d ", puzzle[i][j]);
            }
        }
        fclose(js);

        printf("Obrigado por jogar!\n");
        break;
    case 6:
        printf("Obrigado por jogar!\n");
        return 1;
    default:
        printf("Opcao invalida!\n\n");
        menuJogo();
    }
}

/// funcao que verifica as respostas do sudoku e da um retorno ao jogador
int verificaSudoku()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int num = puzzle[i][j];
            if (num != 0)
            {
                puzzle[i][j] = 0; // temporariamente desabilita para verificacao
                if (!ehValido(i, j, num))
                {
                    puzzle[i][j] = num; // restaura o valor original
                    return 0;
                }
                puzzle[i][j] = num; // restaura o valor original
            }
            else
            {
                return 0; // caso tenha celulas vazias
            }
        }
    }
    return 1;
}

// funcao para carregar os melhores tempos de um arquivo
void carregarTempos()
{
    FILE *file = fopen("tempos.txt", "r");
    if (file == NULL)
        return; // Se o arquivo nao existe, simplesmente sai

    totalRecordes = 0; // redefine para carregar os dados
    while (fscanf(file, "%s %d", recordes[totalRecordes].nome, &recordes[totalRecordes].tempo) != EOF && totalRecordes < 3)
    {
        totalRecordes++;
    }
    fclose(file);
}

// funcao para salvar os melhores tempos em um arquivo
void salvarTempos()
{
    FILE *file = fopen("tempos.txt", "w");
    for (int i = 0; i < totalRecordes; i++)
    {
        fprintf(file, "%s %d\n", recordes[i].nome, recordes[i].tempo);
    }
    fclose(file);
}

// funcao para exibir os melhores tempos
void exibirMelhoresTempos()
{
    carregarTempos();
    printf("Melhores tempos:\n");
    for (int i = 0; i < totalRecordes; i++)
    {
        printf("%s - %d segundos\n", recordes[i].nome, recordes[i].tempo);
    }
}

// funcao para verificar e salvar o tempo como recorde
void verificarSalvarRecorde(int tempo)
{
    carregarTempos();

    if (totalRecordes < 3 || tempo < recordes[totalRecordes - 1].tempo)
    {
        char nome[50];
        printf("Novo recorde! Digite seu nome: ");
        scanf("%s", nome);

        // adiciona o novo recorde ao final
        if (totalRecordes < 3)
        {
            totalRecordes++;
        }
        recordes[totalRecordes - 1].tempo = tempo;
        strcpy(recordes[totalRecordes - 1].nome, nome);

        // ordena os recordes
        for (int i = 0; i < totalRecordes - 1; i++)
        {
            for (int j = i + 1; j < totalRecordes; j++)
            {
                if (recordes[i].tempo > recordes[j].tempo)
                {
                    Recordes temp = recordes[i];
                    recordes[i] = recordes[j];
                    recordes[j] = temp;
                }
            }
        }

        salvarTempos();
    }
}

int main()
{
    srand(time(NULL));

    menuPrincipal();

    return 0;
}