
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int n[10] = {0};
    char s[1000];

    scanf("%s", s);

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        if (isdigit(s[i]))
        {
            n[s[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", n[i]);
    }

    return EXIT_SUCCESS;
}