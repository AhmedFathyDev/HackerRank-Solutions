
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    scanf("%i", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%i", arr + i);
    }

    for (int i = n - 1; i > -1; i--)
    {
        printf("%i ", arr[i]);
    }

    return EXIT_SUCCESS;
}