
#include <iostream>

#define endl '\n'

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    int *arr = new int[n];

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 1; i < n; i++)
    {
        int arr_i = arr[i];
        size_t j = i;

        for (; j > 0 && arr[j - 1] > arr_i; --j)
        {
            arr[j] = arr[j - 1];
        }

        arr[j] = arr_i;

        for (size_t k = 0; k < n; ++k)
        {
            std::cout << arr[k] << " ";
        }

        std::cout << endl;
    }

    return EXIT_SUCCESS;
}