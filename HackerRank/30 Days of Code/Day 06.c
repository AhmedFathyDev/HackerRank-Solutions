
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%i", &t);

    while (t--)
    {
        char S[20002];

        scanf("%s", S);

        for (size_t i = 0; i < strlen(S); i += 2)
        {
            printf("%c", S[i]);
        }

        printf(" ");

        for (size_t i = 1; i < strlen(S); i += 2)
        {
            printf("%c", S[i]);
        }

        printf("\n");
    }

    return EXIT_SUCCESS;
}