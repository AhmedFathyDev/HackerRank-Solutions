
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)

int main(void)
{
    int n, t, *width, i, j, ans;
    scanf("%i %i", &n, &t);

    width = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (width + i));
    }

    while (t--)
    {
        ans = 4;
        scanf("%i %i", &i, &j);
        while (i <= j)
        {
            ans = MIN(ans, width[i]), i++;
        }

        printf("%i\n", ans);
    }

    return EXIT_SUCCESS;
}