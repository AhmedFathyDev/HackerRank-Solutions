
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int a[2 * 10000 + 1];

int main(void)
{

    int n, i, x, ans;
    short int d;

    scanf("%i %hi", &n, &d);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &x);
        a[x]++;
    }

    for (i = 0, ans = 0; i < 2 * 1e4 + 1 + 2 * d; i++)
    {
        if (a[i] && a[i + d] && a[i + 2 * d])
        {
            ans += MAX(a[i], MAX(a[i + d], a[i + 2 * d]));
        }
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}