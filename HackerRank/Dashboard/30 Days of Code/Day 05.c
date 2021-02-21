
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%i", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%i x %i = %i\n", n, i, n * i);
    }

    return EXIT_SUCCESS;
}