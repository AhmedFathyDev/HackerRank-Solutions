
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{

    int n, m, i, j, k, cnt, ans1, ans2;
    char **mem;

    scanf("%i %i", &n, &m);

    mem = malloc(n * sizeof(char *));
    for (i = 0; i < n; i++)
    {
        mem[i] = malloc(m * sizeof(char));
    }

    for (i = 0; i < n; i++)
    {
        scanf("%s", mem[i]);
    }

    for (i = 0, ans1 = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = 0, cnt = 0; k < m; k++)
            {
                if (mem[i][k] == '1' || mem[j][k] == '1')
                {
                    cnt++;
                }
            }

            ans1 = MAX(ans1, cnt);
        }
    }

    for (i = 0, ans2 = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = 0, cnt = 0; k < m; k++)
            {
                if (mem[i][k] == '1' || mem[j][k] == '1')
                {
                    cnt++;
                }
            }

            if (cnt == ans1)
            {
                ans2++;
            }
        }
    }

    printf("%i\n%i", ans1, ans2);

    return EXIT_SUCCESS;
}