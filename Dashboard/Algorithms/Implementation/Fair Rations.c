
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, ans, *citizens, i;

    scanf("%i", &N);

    citizens = malloc(N * sizeof(int));

    for (i = 0, ans = 0; i < N; i++)
    {
        scanf("%i", (citizens + i));
        if (citizens[i] & 1)
        {
            ans++;
        }
    }

    if (ans & 1)
    {
        printf("NO");
        return EXIT_SUCCESS;
    }

    int dis;

    for (i = 0, dis = -1, ans = 0; i < N; i++)
    {
        if (citizens[i] & 1)
        {
            if (dis == -1)
            {
                dis = 0;
            }
            else
            {
                ans += dis + 1;
                dis = -1;
            }
        }
        else if (dis != -1)
        {
            dis++;
        }
    }

    printf("%i", ans * 2);

    return EXIT_SUCCESS;
}