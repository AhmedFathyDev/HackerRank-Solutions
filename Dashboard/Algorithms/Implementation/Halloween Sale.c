
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{

    int p, d, m, s, ans;
    scanf("%i %i %i %i", &p, &d, &m, &s);

    ans = -1;
    while (s > -1)
    {
        s -= p;
        p = MAX(m, p - d);
        ans++;
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}