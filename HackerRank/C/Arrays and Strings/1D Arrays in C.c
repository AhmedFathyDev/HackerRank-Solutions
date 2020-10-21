
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, sum = 0;

    scanf("%i", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        scanf("%i", arr + i);
    }

    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("%i", sum);

    return EXIT_SUCCESS;
}