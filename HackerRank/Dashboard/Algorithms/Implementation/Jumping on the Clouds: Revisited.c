
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, k, i, e;
    scanf("%i %i", &n, &k);

    int *c = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (c + i));
    }

    e = 100;
    for (i = k % n;; i = (i + k) % n)
    {
        c[i] ? e -= 3 : e--;
        if (i == 0)
        {
            break;
        }
    }

    printf("%i", e);

    return EXIT_SUCCESS;
}