#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// se tratando das matrizes, cada i em loop é uma coluna enquanto cada j é uma linha //

// declaracao de todas as funcoes e variaveis globais:
int puzzle[9][9];
FILE *js;

void criaPuzzle();
void imprimePuzzle();
int ehValido();
int resolucaoSudoku();
int menuJogo();
int verificaSudoku();

// inicializa um puzzle de forma aleatoria
void criaPuzzle()
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
    int dificuldade = rand() % 40 + 20;
    for (int i = 1; i <= dificuldade; i++)
    {
        int linha, coluna;
        do
        {
            linha = rand() % 9;
            coluna = rand() % 9;

        } while (puzzle[linha][coluna] == 0);
        puzzle[linha][coluna] = 0;
    }
};

// imprime o jogo de forma organizada e visivel no cmd
void imprimePuzzle()
{
    printf("-------------------------------\n");

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
    int resposta;

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
        menuJogo();
        break;
    case 2:
        js = fopen("jogoSalvo.txt", "r");
        if (js == NULL)
            printf("Não foi possivel abrir o jogo salvo!\n");
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                fscanf(js, "%d", &puzzle[i][j]);
            }
        }
        fclose(js);
        menuJogo();
        break;
    case 3:
        break;
    case 4:
        printf("Obrigado por jogar!\n");
        return 1;
        break;
    default:
        printf("Opcao invalida!");
        menuPrincipal();
    }
}

// funcao de "menu" a partir do jogo iniciado, da diversas opcoes ao jogador
int menuJogo()
{
    int resposta, linha, coluna, verif;

    imprimePuzzle();

    printf("\n1 - Selecionar numero a ser preenchido\n");
    printf("2 - Verificar\n");
    printf("3 - Ver resultado\n");
    printf("4 - Salvar jogo e sair\n");
    printf("5 - Sair\n");

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
                printf("Numero invalido, digite um numero de 1 a 9!\n");
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
            printf("Posicao invalida!\n");
            menuJogo();
        }
        break;

    case 2:
        verif = verificaSudoku();
        if (verif)
        {
            printf("Parabens! Você completou o Sudoku corretamente!\n");
        }
        else
        {
            printf("O Sudoku ainda nao esta completo OU esta incorreto. Continue tentando!\n");
        }
        novoJogo();
        break;

    case 3:
        resolucaoSudoku(0, 0);
        imprimePuzzle();
        break;
    case 4:
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
    case 5:
        printf("Obrigado por jogar!\n");
        return 1;
    default:
        printf("Opcao invalida!\n");
        menuJogo();
    }
}

// funcao que verifica as respostas do sudoku e da um retorno ao jogador
int verificaSudoku()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int num = puzzle[i][j];
            if (num == 0 || !ehValido(i, j, num))
            {
                return 0; // retorna 0 se o sudoku não estiver correto
            }
        }
    }
    return 1; // retorna 1 se o sudoku estiver correto
}
int main()
{
    srand(time(NULL));

    criaPuzzle();
    menuPrincipal();
    // imprimePuzzle();

    return 0;
}