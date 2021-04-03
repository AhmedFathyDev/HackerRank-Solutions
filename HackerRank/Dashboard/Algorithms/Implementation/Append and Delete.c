
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(X, Y) (X < Y ? X : Y)

char s[101], t[101];

int main(void)
{

    int k, i, sc, tc, mn;

    scanf("%s %s %i", s, t, &k);

    for (i = 0; i < MIN(strlen(s), strlen(t)); i++)
    {
        if (s[i] != t[i])
        {
            break;
        }
    }

    if (i == strlen(t) && k > strlen(s) - i)
    {
        puts("Yes");
        return EXIT_SUCCESS;
    }

    sc = strlen(t) - i + strlen(s) - i;
    tc = strlen(s) - i + strlen(t) - i;

    mn = MIN(sc, tc);

    printf(k < mn || (k > mn && ((k - mn) & 1) && i) ? "No" : "Yes");

    return EXIT_SUCCESS;
}