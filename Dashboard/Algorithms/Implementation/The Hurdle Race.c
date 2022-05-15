
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    int n, k, x, mx;
    scanf("%i %i", &n, &k);

    mx = 0;
    while (n--)
    {
        scanf("%i", &x);
        mx = MAX(x, mx);
    }

    printf("%i", k < mx ? mx - k : 0);

    return EXIT_SUCCESS;
}