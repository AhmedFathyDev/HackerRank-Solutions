
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short int n, i, j, d, m, sum, ans;
    ans = 0;

    scanf("%hi", &n);

    short int *s = malloc(n * sizeof(short int));

    for (i = 0; i < n; i++)
    {
        scanf("%hi", (s + i));
    }

    scanf("%hi %hi", &d, &m);

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum += *(s + i + j);
        }

        if (sum == d)
        {
            ans++;
        }
    }

    printf("%hi", ans);

    return EXIT_SUCCESS;
}