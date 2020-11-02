
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, _1 = 0, ans = 0;

    scanf("%i", &n);

    while (n)
    {
        n & 1 ? _1++ : (_1 = 0);
        n >>= 1;
        ans = ans > _1 ? ans : _1;
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}