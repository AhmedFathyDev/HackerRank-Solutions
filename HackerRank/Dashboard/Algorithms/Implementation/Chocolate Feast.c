
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, n, c, m, ans, r;

    scanf("%i", &t);

    while (t--)
    {
        scanf("%i %i %i", &n, &c, &m);
        ans = n /= c;
        while (n >= m)
        {
            r = n % m;
            ans += n / m;
            n = (n / m) + r;
            r = 0;
        }

        printf("%i\n", ans);
    }

    return EXIT_SUCCESS;
}