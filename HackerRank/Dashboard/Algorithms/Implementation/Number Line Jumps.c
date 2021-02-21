
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x1, x2, v1, v2;
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);

    if (v1 <= v2)
    {
        puts("NO");
    }
    else
    {
        while (1)
        {
            if (x1 > x2)
            {
                puts("NO");
                break;
            }
            else if (x1 == x2)
            {
                puts("YES");
                break;
            }
            else
            {
                x1 += v1, x2 += v2;
            }
        }
    }

    return EXIT_SUCCESS;
}