
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d1, d2, m1, m2, y1, y2, fine = 0;

    scanf("%i %i %i", &d2, &m2, &y2);
    scanf("%i %i %i", &d1, &m1, &y1);

    if (d2 > d1 && m1 == m2 && y1 == y2)
    {
        fine = (d2 - d1) * 15;
    }
    else if (m2 > m1 && y1 == y2)
    {
        fine = (m2 - m1) * 500;
    }
    else if (y2 > y1)
    {
        fine = 10000;
    }

    printf("%i", fine);

    return EXIT_SUCCESS;
}