
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n, ans, c;
    char ch;
    bool b = 1;
    scanf("%i ", &n);

    c = 0, ans = 0;
    while (n--)
    {
        scanf("%c", &ch);
        ch == 'U' ? c++ : c--;
        if (c < 0 && b)
        {
            b = 0;
            ans++;
        }
        else if (c >= 0)
        {
            b = 1;
        }
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}