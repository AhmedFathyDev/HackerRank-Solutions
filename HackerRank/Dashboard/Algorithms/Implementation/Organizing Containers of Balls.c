
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int merge(int array[], int tempArray[],
          size_t left, size_t middle1, size_t middle2, size_t right)
{
    size_t leftIndex = left, rightIndex = middle2, combinedIndex = left;
    int inversions = 0;
    while (leftIndex <= middle1 && rightIndex <= right)
    {
        tempArray[combinedIndex++] =
            array[leftIndex] <= array[rightIndex] ? array[leftIndex++] : array[rightIndex++],
        inversions += middle2 - leftIndex;
    }
    while (leftIndex <= middle1)
    {
        tempArray[combinedIndex++] = array[leftIndex++];
    }
    while (rightIndex <= right)
    {
        tempArray[combinedIndex++] = array[rightIndex++];
    }
    for (size_t i = left; i <= right; i++)
    {
        array[i] = tempArray[i];
    }
    return inversions;
}
int mergeSort(int array[], int tempArray[], size_t low, size_t high)
{
    return low < high ? mergeSort(array, tempArray, low, (low + high) / 2) + mergeSort(array, tempArray, (low + high) / 2 + 1, high) + merge(array, tempArray, low, (low + high) / 2, (low + high) / 2 + 1, high) : 0;
}
int sort(int array[], size_t length)
{
    int *tempArray = malloc(sizeof(int) * length);
    return mergeSort(array, tempArray, 0, length - 1);
}

int main(void)
{
    int q;
    scanf("%i", &q);
    while (q--)
    {
        int n;
        scanf("%i", &n);

        int **containers = malloc(sizeof(int *) * n + 1);

        for (size_t i = 0; i <= n; ++i)
        {
            containers[i] = malloc(sizeof(int) * n + 1);
        }

        for (size_t i = 0; i <= n; ++i)
        {
            containers[i][0] = 0;
        }

        for (size_t j = 0; j <= n; ++j)
        {
            containers[0][j] = 0;
        }

        for (size_t i = 1; i <= n; ++i)
        {
            for (size_t j = 1; j <= n; ++j)
            {
                scanf("%i", containers[i] + j);
                containers[i][0] += containers[i][j];
                containers[0][j] += containers[i][j];
            }
        }

        int *type = malloc(sizeof(int) * n + 1);
        int *container = malloc(sizeof(int) * n + 1);

        bool imp = false;

        for (size_t j = 0; j <= n; ++j)
        {
            type[j] = containers[0][j];
        }

        for (size_t i = 0; i <= n; ++i)
        {
            container[i] = containers[i][0];
        }

        sort(type, n + 1);
        sort(container, n + 1);

        for (size_t i = 0; i <= n; ++i)
        {
            if (type[i] != container[i])
            {
                imp = true;
                break;
            }
        }

        puts(imp ? "Impossible" : "Possible");
    }

    return EXIT_SUCCESS;
}