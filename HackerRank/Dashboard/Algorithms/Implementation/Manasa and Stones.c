
#include <stdio.h>
#include <stdlib.h>

void swap(int *xPtr, int *yPtr)
{
    *xPtr ^= *yPtr;
    *yPtr ^= *xPtr;
    *xPtr ^= *yPtr;
}

int main(void)
{
    int t;
    scanf("%i", &t);

    while (t--)
    {
        int n, a, b, stone = 0;
        scanf("%i%i%i", &n, &a, &b);

        if (a == b)
        {
            printf("%i\n", (n - 1) * a);
            continue;
        }

        if (a > b)
        {
            swap(&a, &b);
        }

        for (int i = 1; i <= n; i++, stone = 0)
        {
            for (int j = i - 1; j > 0; j--)
            {
                stone += b;
            }

            for (int j = n; j > i; j--)
            {
                stone += a;
            }

            printf("%i ", stone);
        }

        puts("");
    }

    return EXIT_SUCCESS;
}