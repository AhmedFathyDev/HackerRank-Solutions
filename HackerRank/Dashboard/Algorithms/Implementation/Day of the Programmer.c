
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int y;
    scanf("%i", &y);

    if ((y < 1919 && y % 4 == 0) || ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
    {
        printf("12.09.%i", y);
    }
    else if (y == 1918)
    {
        printf("26.09.%i", y);
    }
    else
    {
        printf("13.09.%i", y);
    }

    return EXIT_SUCCESS;
}