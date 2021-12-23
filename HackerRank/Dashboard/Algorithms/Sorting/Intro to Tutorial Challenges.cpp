
#include <vector>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int v, n, arr;

    std::cin >> v >> n;

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> arr;
        if (arr == v)
        {
            std::cout << i;
        }
    }

    return EXIT_SUCCESS;
}