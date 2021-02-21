
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)

int main(void)
{

    int n, ans, i, *a, j;
    scanf("%i", &n);

    a = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (a + i));
    }

    ans = n + 1;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ans = MIN(ans, j - i);
            }
        }
    }

    printf("%i", ans == n + 1 ? -1 : ans);

    return EXIT_SUCCESS;
}