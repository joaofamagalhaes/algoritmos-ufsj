#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// se tratando das matrizes, cada i em loop é uma coluna enquanto cada j é uma linha//

// declaracao de todas as funcoes e variaveis globais:
int puzzle[9][9];

void criaPuzzle();
void imprimePuzzle();
int ehValido();
int resolucaoSudoku();

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

int main()
{
    srand(time(NULL));

    criaPuzzle();
    imprimePuzzle();

    return 0;
}