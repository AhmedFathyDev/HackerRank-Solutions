
#include <stdio.h>
#include <stdlib.h>

short int ar[100];

int main(void)
{
    short int n, i, ans;
    scanf("%hi", &n);

    for (i = 0; i < n; i++)
    {
        short int x;
        scanf("%hi", &x);
        ar[x - 1]++;
    }

    ans = 0;
    for (i = 0; i < 100; i++)
    {
        ans += ar[i] / 2;
    }

    printf("%hi", ans);

    return EXIT_SUCCESS;
}