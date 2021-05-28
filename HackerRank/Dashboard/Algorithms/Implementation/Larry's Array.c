
#include <stdio.h>
#include <stdlib.h>

int merge(int array[], int tempArray[],
          size_t left, size_t middle1, size_t middle2, size_t right)
{
    size_t leftIndex = left, rightIndex = middle2, combinedIndex = left;
    int inversions = 0;

    while (leftIndex <= middle1 && rightIndex <= right)
    {
        if (array[leftIndex] <= array[rightIndex])
        {
            tempArray[combinedIndex++] = array[leftIndex++];
        }
        else
        {
            tempArray[combinedIndex++] = array[rightIndex++];
            inversions += middle2 - leftIndex;
        }
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
    int *tempArray = (int *)malloc(sizeof(int) * length);
    return mergeSort(array, tempArray, 0, length - 1);
}

int main(void)
{
    int t;

    scanf("%i", &t);

    while (t--)
    {
        int n;
        scanf("%i", &n);
        int *A = (int *)malloc(sizeof(int) * n);

        for (size_t i = 0; i < n; ++i)
        {
            scanf("%i", A + i);
        }

        printf(sort(A, n) & 1 ? "NO\n" : "YES\n");
    }

    return EXIT_SUCCESS;
}