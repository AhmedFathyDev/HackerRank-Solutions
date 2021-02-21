
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short int d1, d2, m1, m2, y1, y2, fine;

    scanf("%hi %hi %hi", &d1, &m1, &y1);
    scanf("%hi %hi %hi", &d2, &m2, &y2);

    if (d1 > d2 && m1 == m2 && y1 == y2)
    {
        fine = 15 * (d1 - d2);
    }
    else if (m1 > m2 && y1 == y2)
    {
        fine = 500 * (m1 - m2);
    }
    else if (y1 > y2)
    {
        fine = 10000;
    }
    else
    {
        fine = 0;
    }

    printf("%hi", fine);

    return EXIT_SUCCESS;
}