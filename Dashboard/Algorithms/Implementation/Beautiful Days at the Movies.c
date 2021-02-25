
#include <stdio.h>
#include <stdlib.h>

#define ABS(X) ((X) < 0 ? (X) * -1 : X)

int main(void)
{

    int i, j, k, x, y, ans;
    scanf("%i %i %i", &i, &j, &k);

    ans = 0;
    while (i <= j)
    {
        x = i, y = 0;
        while (x)
        {
            y = y * 10 + x % 10, x /= 10;
        }

        if (ABS(i - y) % k == 0)
        {
            ans++;
        }

        i++;
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}