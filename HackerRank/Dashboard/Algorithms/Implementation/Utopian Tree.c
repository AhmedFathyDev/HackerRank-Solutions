
#include <stdio.h>
#include <stdlib.h>

int cycles[61];

int main(void)
{

    int t, n, i;

    cycles[0] = 1;
    for (i = 1; i < 61; i++)
    {
        cycles[i] = i & 1 ? cycles[i - 1] * 2 : cycles[i - 1] + 1;
    }

    scanf("%i", &t);

    while (t--)
    {
        scanf("%i", &n);
        printf("%i\n", cycles[n]);
    }

    return EXIT_SUCCESS;
}