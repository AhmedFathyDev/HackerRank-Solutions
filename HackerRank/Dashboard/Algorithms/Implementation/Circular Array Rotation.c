
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n, k, q, m, *a, i;
    scanf("%i %i %i", &n, &k, &q);
    a = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (a + i));
    }

    i = 0;

    while (q--)
    {
        scanf("%i", &m);
        printf("%i\n", a[(n + m - (i + k) % n) % n]);
    }

    return EXIT_SUCCESS;
}