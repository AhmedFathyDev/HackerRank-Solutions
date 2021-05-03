
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[81];

int main(void)
{
    scanf("%s", s);

    int len = strlen(s), k = 0;
    int rows = floor(sqrt(len + 1)) + 1;
    int columns = ceil(sqrt(len));

    char **grid = malloc(sizeof(char *) * rows);

    for (size_t i = 0; i < rows; ++i)
    {
        grid[i] = malloc(sizeof(char) * columns);
    }

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            grid[i][j] = k < len ? s[k++] : ' ';
        }
    }

    for (size_t j = 0; j < columns; ++j)
    {
        for (size_t i = 0; i < rows; ++i)
        {
            if (grid[i][j] != ' ')
            {
                putchar(grid[i][j]);
            }
        }

        putchar(' ');
    }

    return EXIT_SUCCESS;
}