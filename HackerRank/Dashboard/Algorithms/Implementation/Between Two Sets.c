
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, i, x, j, ans;
    scanf("%i %i", &n, &m);

    int *a = malloc(n * sizeof(int));
    int *b = malloc(m * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (a + i));
    }
    for (i = 0; i < m; i++)
    {
        scanf("%i", (b + i));
    }

    ans = 0;
    for (i = 1; i < 101; i++)
    {
        x = 0;
        for (j = 0; j < n; j++)
        {
            if (i % *(a + j) != 0)
            {
                x++;
            }
        }

        for (j = 0; j < m; j++)
        {
            if (*(b + j) % i != 0)
            {
                x++;
            }
        }

        if (!x)
        {
            ans++;
        }
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}