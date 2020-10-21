
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, n, k, ans;

    scanf("%i", &t);

    while (t--)
    {
        ans = 0;

        scanf("%i %i", &n, &k);

        for (int b = n; b > 0; b--)
        {
            for (int a = b - 1; a > 0; a--)
            {
                if ((a & b) < k && (a & b) > ans)
                {
                    ans = a & b;
                }
            }
        }

        printf("%i\n", ans);
    }

    return EXIT_SUCCESS;
}