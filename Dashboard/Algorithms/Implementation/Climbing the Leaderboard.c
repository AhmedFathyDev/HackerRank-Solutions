
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, *scores, *ranks;

    scanf("%i", &n);
    ranks = malloc(sizeof(int) * n);
    scores = malloc(sizeof(int) * n);

    for (size_t i = 0; i < n; ++i)
    {
        scanf("%i", scores + i);

        if (!i)
        {
            ranks[i] = 1;
        }
        else
        {
            if (scores[i] == scores[i - 1])
            {
                ranks[i] = ranks[i - 1];
            }
            else
            {
                ranks[i] = ranks[i - 1] + 1;
            }
        }
    }

    scanf("%i", &m);

    while (m--)
    {
        int aliceScore, aliceRank = ranks[n - 1] + 1;

        scanf("%i", &aliceScore);

        if (aliceScore >= scores[0])
        {
            printf("1\n");
        }
        else if (aliceScore < scores[n - 1])
        {
            printf("%i\n", aliceRank);
        }
        else
        {
            int start = 0, end = n - 1;

            while (start <= end)
            {
                int mid = (start + end) / 2;

                if (scores[mid] <= aliceScore)
                {
                    aliceRank = ranks[mid];
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }

            printf("%i\n", aliceRank);
        }
    }

    return EXIT_SUCCESS;
}