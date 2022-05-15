
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;

    scanf("%i", &t);

    while (t--)
    {
        int n, k;
        scanf("%i %i", &n, &k);

        if (k == 0)
        {
            for (size_t i = 1; i <= n; ++i)
            {
                printf("%i ", i);
            }
        }
        else if (n % (2 * k) != 0)
        {
            printf("-1");
        }
        else
        {
            for (size_t i = 1; i <= n; i += 2 * k)
            {
                for (size_t j = i; j < i + k; ++j)
                {
                    printf("%i ", j + k);
                }
                for (size_t j = i + k; j < i + 2 * k; ++j)
                {
                    printf("%i ", j - k);
                }
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}