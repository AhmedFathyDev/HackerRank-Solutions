
# Quicksort 1 - Partition
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[left];
    int i = left + 1;
    int j = right;

    while (i < j)
    {
        while (i <= j && arr[i] <= pivot)
        {
            ++i;
        }

        while (i <= j && arr[j] > pivot)
        {
            --j;
        }

        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[left], &arr[j]);

    return j;
}

void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);

        quick_sort(arr, left, pi - 1);
        quick_sort(arr, pi + 1, right);
    }
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return EXIT_SUCCESS;
}
```