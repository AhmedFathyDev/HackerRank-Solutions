
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, *p, x, y, z;
    scanf("%i", &n);

    p = malloc(++n * sizeof(int));

    for (x = 1; x < n; x++)
    {
        scanf("%i", (p + x));
    }

    for (x = 1; x < n; x++)
    {
        for (z = 1; z < n; z++)
        {
            if (x == p[z])
            {
                for (y = 1; y < n; y++)
                {
                    if (x == p[p[y]])
                    {
                        printf("%i\n", y);
                    }
                }
            }
        }
    }

    return EXIT_SUCCESS;
}