
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int q, a, b;

    scanf("%i", &q);

    while (q--)
    {
        scanf("%i %i", &a, &b);

        printf("%i\n", (int)(floor(sqrt(b)) - ceil(sqrt(a)) + 1));
    }

    return EXIT_SUCCESS;
}