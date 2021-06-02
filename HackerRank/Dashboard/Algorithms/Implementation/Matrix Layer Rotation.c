
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, columns, rotations;

    scanf("%i %i %i ", &rows, &columns, &rotations);

    int **matrix = (int **)malloc(sizeof(int *) * rows);
    int **result = (int **)malloc(sizeof(int *) * rows);

    for (size_t r = 0; r < rows; ++r)
    {
        matrix[r] = (int *)malloc(sizeof(int) * columns);
        result[r] = (int *)malloc(sizeof(int) * columns);

        for (size_t c = 0; c < columns; ++c)
        {
            scanf("%i ", matrix[r] + c);
        }
    }

    --rows;
    --columns;

    for (int r = 0; r <= rows; ++r)
    {
        for (int c = 0; c <= columns; ++c)
        {
            int x = r < rows - r ? r : rows - r;
            int y = c < columns - c ? c : columns - c;

            int min = x < y ? x : y;

            int maxRow = rows - min;
            int maxCol = columns - min;

            int parameter = (maxRow + maxCol) * 2 - min * 4;

            int newRow = r;
            int newCol = c;

            for (int a = 0; a < rotations % parameter; ++a)
            {
                if (newRow < maxRow && newCol == min)
                {
                    newRow++;
                }
                else if (newRow == maxRow && newCol < maxCol)
                {
                    newCol++;
                }
                else if (newRow > min && newCol == maxCol)
                {
                    newRow--;
                }
                else if (newRow == min && newCol > min)
                {
                    newCol--;
                }
            }

            result[newRow][newCol] = matrix[r][c];
        }
    }

    for (size_t r = 0; r <= rows; ++r)
    {
        for (size_t c = 0; c <= columns; ++c)
        {
            printf("%i ", result[r][c]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}