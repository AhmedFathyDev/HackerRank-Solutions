
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int integers[101];

int main(void)
{

    int n, x, ans, mx;
    scanf("%i", &n);

    ans = n, mx = 0;
    while (n--)
    {
        scanf("%i", &x);
        integers[x]++;
        mx = MAX(mx, integers[x]);
    }

    printf("%i", ans - mx);

    return EXIT_SUCCESS;
}