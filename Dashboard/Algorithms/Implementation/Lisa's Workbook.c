
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k, ch_problems, page, problem, answer;

    scanf("%i %i", &n, &k);

    page = 0, answer = 0;

    while (n--)
    {
        scanf("%i", &ch_problems);

        problem = 1, page++;

        while (ch_problems--)
        {
            if (problem == page)
            {
                answer++;
            }
            
            if (problem % k == 0 && ch_problems)
            {
                page++;
            }

            problem++;
        }
    }

    printf("%i", answer);

    return EXIT_SUCCESS;
}