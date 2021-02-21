
#include <stdio.h>
#include <stdlib.h>

#define Ceil(x, y) ((x + y - 1) / y)

int main(void)
{
    int grades_count, i, x;
    scanf("%i", &grades_count);

    for (i = 0; i < grades_count; i++)
    {
        scanf("%i", &x);
        if (x % 5 == 1 || x % 5 == 2 || x < 38)
        {
            printf("%i\n", x);
        }
        else
        {
            printf("%i\n", Ceil(x, 5) * 5);
        }
    }

    return EXIT_SUCCESS;
}