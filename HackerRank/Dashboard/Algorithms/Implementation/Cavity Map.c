
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isCavity(int cell, int a, int b, int c, int d)
{
    return cell > a ? (cell > b ? (cell > c ? (cell > d ? 1 : 0) : 0) : 0) : 0;
}

int main(int argc, char *argv[])
{
    int n, **matrix;
    scanf("%i", &n);

    matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        matrix[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1i", (matrix[i] + j));
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && j > 0 && j < n - 1 && i < n - 1 &&
                isCavity(matrix[i][j], matrix[i - 1][j], matrix[i + 1][j], matrix[i][j - 1], matrix[i][j + 1]))
            {
                printf("%c", 'X');
            }
            else
            {
                printf("%i", matrix[i][j]);
            }
        }
        
        puts("");
    }

    return EXIT_SUCCESS;
}