
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int g;
    scanf("%i", &g);

    while (g--)
    {
        int n, _count = 0, characters[26];
        scanf("%i", &n);

        char *b = (char *)malloc((n + 1) * sizeof(char));
        scanf("%s", b);

        for (int i = 0; i < 26; i++)
        {
            characters[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] != '_')
            {
                characters[b[i] - 'A']++;
            }
            else
            {
                _count++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (characters[i] == 1)
            {
                puts("NO");
                goto endGame;
            }
        }

        if (!_count)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if ((b[i] != b[i + 1]) && (b[i] != b[i - 1]))
                {
                    puts("NO");
                    goto endGame;
                }
            }
        }

        puts("YES");
    endGame:
        free(b);
        b = NULL;
    }

    return EXIT_SUCCESS;
}