
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define max(X, Y) (X > Y ? X : Y)

int hourglass(int **arr)
{
    int mx = INT_MIN;

    for (size_t i = 1; i < 5; i++)
    {
        for (size_t j = 1; j < 5; j++)
        {
            mx = max(mx, arr[i][j] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
        }
    }
    
    return mx;
}

int main(void)
{
    int **arr = (int **)malloc(6 * sizeof(int *));

    for (int i = 0; i < 6; i++)
    {
        *(arr + i) = (int *)malloc(6 * (sizeof(int)));

        for (int j = 0; j < 6; j++)
        {
            scanf("%i", *(arr + i) + j);
        }
    }

    printf("%i", hourglass(arr));

    return EXIT_SUCCESS;
}