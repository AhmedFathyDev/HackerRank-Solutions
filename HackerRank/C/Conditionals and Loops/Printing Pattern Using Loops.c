
#include <stdio.h>
#include <stdlib.h>

#define min(X, Y) (X > Y ? Y : X)

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i < n * 2; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%i ", n - min(i, j) + 1);
            }

            for (int j = n - 1; j > 0; j--)
            {
                printf("%i ", n - min(i, j) + 1);
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%i ", n - min(n - (i - n), j) + 1);
            }

            for (int j = n - 1; j > 0; j--)
            {
                printf("%i ", n - min(n - (i - n), j) + 1);
            }
        }

        printf("\n");
    }

    return EXIT_SUCCESS;
}