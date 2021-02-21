
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, n;

    scanf("%i", &t);

    while (t--)
    {
        scanf("%i", &n);

        for (long int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                n = 1;
            }
        }

        printf(n != 1 ? "Prime\n" : "Not prime\n");
    }

    return EXIT_SUCCESS;
}