
#include <stdio.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
    switch (n)
    {
    case 1:
        return a;
    case 2:
        return b;
    case 3:
        return c;
    default:
        return find_nth_term(n - 1, a, b, c);
    }
}

int main(void)
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);

    return EXIT_SUCCESS;
}