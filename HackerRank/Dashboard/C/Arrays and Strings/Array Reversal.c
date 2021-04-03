
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    int *arr = (int *)malloc(num * sizeof(int));

    for (size_t i = 0; i < num; i++)
    {
        scanf("%i", arr + i);
    }

    for (size_t i = 0; i < num / 2; i++)
    {
        arr[i] ^= arr[num - i - 1];
        arr[num - i - 1] ^= arr[i];
        arr[i] ^= arr[num - i - 1];
    }

    for (size_t i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return EXIT_SUCCESS;
}