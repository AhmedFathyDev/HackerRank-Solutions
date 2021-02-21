
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int cumulative, i, n, shared;

    scanf("%i", &n);

    shared = 2, cumulative = 2;
    for (i = 1; i < n; i++)
    {
        cumulative = (shared = (shared * 3) / 2) + cumulative;
    }

    printf("%i", cumulative);

    return EXIT_SUCCESS;
}