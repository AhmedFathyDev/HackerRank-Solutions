
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, sum;
    scanf("%i", &n);

    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%i", (arr + i));
    }

    for (sum = 0, i = 0; i < n - 1; i += 2)
    {
        sum++;
        if (arr[i])
        {
            i--;
        }
    }

    printf("%i", sum);

    return EXIT_SUCCESS;
}