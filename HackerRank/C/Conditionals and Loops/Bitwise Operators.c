
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k;
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    scanf("%d %d", &n, &k);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            if ((a | b) > max_or && (a | b) < k)
            {
                max_or = a | b;
            }
            if ((a & b) > max_and && (a & b) < k)
            {
                max_and = a & b;
            }
            if ((a ^ b) > max_xor && (a ^ b) < k)
            {
                max_xor = a ^ b;
            }
        }
    }

    printf("%i\n%i\n%i", max_and, max_or, max_xor);

    return EXIT_SUCCESS;
}