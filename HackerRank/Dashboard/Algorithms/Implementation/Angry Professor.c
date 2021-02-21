
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int t, n, k, ans, x;
    scanf("%i", &t);

    while (t--)
    {
        scanf("%i %i", &n, &k);
        ans = 0;
        while (n--)
        {
            scanf("%i", &x);
            x > 0 ? ans : ans++;
        }

        puts(k > ans ? "YES" : "NO");
    }

    return EXIT_SUCCESS;
}