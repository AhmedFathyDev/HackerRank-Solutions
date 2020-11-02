
#include <stdio.h>
#include <stdlib.h>

void swap(int *xptr, int *yptr)
{
    *xptr ^= *yptr;
    *yptr ^= *xptr;
    *xptr ^= *yptr;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        scanf("%i", a + i);
    }

    int numberOfSwaps = 0;

    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a + j, a + j + 1);
                numberOfSwaps++;
            }
        }
        if (numberOfSwaps == 0)
        {
            break;
        }
    }

    printf("Array is sorted in %i swaps.\n", numberOfSwaps);
    printf("First Element: %i", a[0]);
    printf("Last Element: %i", a[n - 1]);

    return EXIT_SUCCESS;
}