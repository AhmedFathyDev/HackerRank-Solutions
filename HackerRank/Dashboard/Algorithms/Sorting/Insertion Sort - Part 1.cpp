
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

    for (size_t j = 0; j < n; ++j)
    {
        std::cin >> arr[j];
    }

    int arr_n = arr[n - 1];
    size_t i = n - 1;

    for (; i > 0 && arr[i - 1] > arr_n; --i)
    {
        arr[i] = arr[i - 1];

        for (size_t j = 0; j < n; ++j)
        {
            std::cout << arr[j] << " ";
        }

        std::cout << '\n';
    }

    arr[i] = arr_n;

    for (size_t j = 0; j < n; ++j)
    {
        std::cout << arr[j] << " ";
    }

    return EXIT_SUCCESS;
}
