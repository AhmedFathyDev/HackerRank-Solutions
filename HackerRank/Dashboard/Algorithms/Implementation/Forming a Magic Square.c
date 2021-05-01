
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(void)
{
    int magicMatrix[8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };

    int s[3][3], minimumCost = 81;

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            scanf("%i", s[i] + j);
        }
    }

    for (size_t k = 0; k < 8; ++k)
    {
        int cost = 0;

        for (size_t i = 0; i < 3; ++i)
        {
            for (size_t j = 0; j < 3; ++j)
            {
                cost += abs(s[i][j] - magicMatrix[k][i][j]);
            }
        }

        minimumCost = MIN(minimumCost, cost);
    }

    printf("%i", minimumCost);

    return EXIT_SUCCESS;
}