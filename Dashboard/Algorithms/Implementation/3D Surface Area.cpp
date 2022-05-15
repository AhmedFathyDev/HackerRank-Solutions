#include <vector>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, w;

    scanf("%i %i", &h, &w);

    std::vector<std::vector<int>> A(h + 2, std::vector<int>(w + 2, 0));

    for (size_t i = 1; i <= h; ++i)
    {
        for (size_t j = 1; j <= w; ++j)
        {
            scanf("%i", &A[i][j]);
        }
    }

    int area = 2 * w * h;

    for (size_t i = 0; i <= h; ++i)
    {
        for (size_t j = 0; j <= w; ++j)
        {
            area += abs(A[i][j] - A[i][j + 1]);
            area += abs(A[i][j] - A[i + 1][j]);
        }
    }

    printf("%i", area);

    return EXIT_SUCCESS;
}