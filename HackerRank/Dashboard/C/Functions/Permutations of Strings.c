
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    int i = n - 1;

    while (i > 0 && strcmp(s[i - 1], s[i]) >= 0)
    {
        i--;
    }

    if (i <= 0)
    {
        return 0;
    }

    int j = n - 1;

    while (strcmp(s[i - 1], s[j]) >= 0)
    {
        j--;
    }

    char *str = s[i - 1];
    s[i - 1] = s[j], s[j] = str;
    j = n - 1;

    while (i < j)
    {
        str = s[i], s[i] = s[j], s[j] = str;
        i++, j--;
    }

    return 1;
}