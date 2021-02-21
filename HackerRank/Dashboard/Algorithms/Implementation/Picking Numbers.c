
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int a[101];

int main(void)
{
    int n, x, i, ans;
    scanf("%i", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &x);
        a[x]++;
    }

    ans = 0;
    for (i = 0; i < 101; i++)
    {
        ans = MAX(ans, a[i] + a[i + 1]);
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}