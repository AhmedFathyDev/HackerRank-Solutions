
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s, t, a, b, m, n, sum;
    scanf("%i %i %i %i %i %i", &s, &t, &a, &b, &m, &n);
    sum = 0;
    while (m--)
    {
        int x;
        scanf("%i", &x);
        x += a;
        sum += (x >= s && x <= t) ? 1 : 0;
    }

    printf("%i\n", sum);
    sum = 0;
    while (n--)
    {
        int x;
        scanf("%i", &x);
        x += b;
        sum += (x >= s && x <= t) ? 1 : 0;
    }

    printf("%i", sum);

    return EXIT_SUCCESS;
}