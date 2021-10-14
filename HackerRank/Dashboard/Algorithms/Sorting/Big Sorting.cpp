
#include <iostream>
#include <algorithm>

bool compare(std::string x, std::string y)
{
    int xSize = x.size();
    int ySize = y.size();

    if (xSize == ySize)
    {
        return (x < y);
    }

    return xSize < ySize;
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::string *unsorted = new std::string[n];

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> unsorted[i];
    }

    sort(unsorted, unsorted + n, compare);

    for (size_t i = 0; i < n; ++i)
    {
        std::cout << unsorted[i] << '\n';
    }

    return EXIT_SUCCESS;
}