
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int q, x, y, z;
    scanf("%i", &q);

    while (q--)
    {
        scanf("%i %i %i", &x, &y, &z);
        if (abs(z - x) > abs(z - y))
        {
            puts("Cat B");
        }
        else if (abs(z - x) < abs(z - y))
        {
            puts("Cat A");
        }
        else
        {
            puts("Mouse C");
        }
    }

    return EXIT_SUCCESS;
}