
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long int t, value = 3, time = 1;

    scanf("%li", &t);

    while (time <= t)
    {
        time += value, value *= 2;
    }

    value /= 2, time -= value;

    printf("%li", value - (t - time));

    return EXIT_SUCCESS;
}