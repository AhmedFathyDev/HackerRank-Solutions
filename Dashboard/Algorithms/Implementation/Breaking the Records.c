
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, ansmin, ansmax, min, max;
    ansmin = 0, ansmax = 0;

    scanf("%i", &n);

    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (arr + i));
    }

    min = *(arr);
    max = *(arr);

    for (i = 0; i < n; i++)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i), ansmin++;
        }
        else if (*(arr + i) > max)
        {
            max = *(arr + i), ansmax++;
        }
    }

    printf("%i %i", ansmax, ansmin);

    return EXIT_SUCCESS;
}