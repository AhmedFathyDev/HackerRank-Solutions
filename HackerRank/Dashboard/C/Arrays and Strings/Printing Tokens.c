
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = malloc(1024 * sizeof(char));

    scanf("%[^\n]%*c", s);

    s = realloc(s, strlen(s) + 1);

    char *ch = malloc((strlen(s) + 1) * sizeof(char));

    for (size_t i = 0, j = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            printf("%s\n", ch);
            memset(ch, 0, sizeof(ch));
            j = 0;
        }
        else
        {
            ch[j++] = s[i];
        }
    }
    printf("%s", ch);

    return EXIT_SUCCESS;
}