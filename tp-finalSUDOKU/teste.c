#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 9

int sudoku[GRID_SIZE][GRID_SIZE];

// Function to check if the number is valid in the given position
int isValid(int row, int col, int num)
{
    // Check row
    for (int i = 0; i < GRID_SIZE; i++)
    {
        if (sudoku[row][i] == num)
        {
            return 0;
        }
    }

    // Check column
    for (int i = 0; i < GRID_SIZE; i++)
    {
        if (sudoku[i][col] == num)
        {
            return 0;
        }
    }

    // Check 3x3 subgrid
    int subGridRow = (row / 3) * 3;
    int subGridCol = (col / 3) * 3;
    for (int i = subGridRow; i < subGridRow + 3; i++)
    {
        for (int j = subGridCol; j < subGridCol + 3; j++)
        {
            if (sudoku[i][j] == num)
            {
                return 0;
            }
        }
    }

    return 1;
}

// Function to solve the Sudoku puzzle
int solveSudoku(int row, int col)
{
    if (row == GRID_SIZE)
    {
        return 1;
    }

    if (col == GRID_SIZE)
    {
        return solveSudoku(row + 1, 0);
    }

    if (sudoku[row][col] != 0)
    {
        return solveSudoku(row, col + 1);
    }

    for (int num = 1; num <= GRID_SIZE; num++)
    {
        if (isValid(row, col, num))
        {
            sudoku[row][col] = num;
            if (solveSudoku(row, col + 1))
            {
                return 1;
            }
            sudoku[row][col] = 0;
        }
    }

    return 0;
}

// Function to generate a random Sudoku puzzle
void generateSudoku()
{
    // Initialize the Sudoku grid with 0s
    for (int i = 0; i < GRID_SIZE; i++)
    {
        for (int j = 0; j < GRID_SIZE; j++)
        {
            sudoku[i][j] = 0;
        }
    }

    // Solve the Sudoku puzzle
    solveSudoku(0, 0);

    // Remove some numbers to create a puzzle
    int numbersToRemove = rand() % 40 + 20;
    for (int i = 0; i < numbersToRemove; i++)
    {
        int row, col;
        do
        {
            row = rand() % GRID_SIZE;
            col = rand() % GRID_SIZE;
        } while (sudoku[row][col] == 0);
        sudoku[row][col] = 0;
    }
}

int main()
{
    srand(time(NULL));
    generateSudoku();

    // Print the generated Sudoku puzzle
    for (int i = 0; i < GRID_SIZE; i++)
    {
        for (int j = 0; j < GRID_SIZE; j++)
        {
            printf("%d ", sudoku[i][j]);
            if ((j + 1) % 3 == 0)
            {
                printf("| ");
            }
        }
        printf("\n");
        if ((i + 1) % 3 == 0)
        {
            printf("-------------------\n");
        }
    }

    return 0;
}