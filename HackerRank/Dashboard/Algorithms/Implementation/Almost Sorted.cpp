
#include <vector>
#include <iostream>
#include <algorithm>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> d(n);
    std::vector<int> indices;
    std::vector<int> dSorted(n);

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> d[i];
        dSorted[i] = d[i];
    }

    sort(dSorted.begin(), dSorted.end());

    for (size_t i = 0; i < n; ++i)
    {
        if (d[i] != dSorted[i])
        {
            indices.push_back(i);
        }
    }

    if (indices.size() == 0)
    {
        std::cout << "yes";
    }
    else if (indices.size() == 2)
    {
        if (d[indices[0]] == dSorted[indices[1]])
        {
            std::cout << "yes\n";
            std::cout << "swap " << indices[0] + 1 << " " << indices.back() + 1;
        }
        else
        {
            std::cout << "no";
        }
    }
    else if (indices.size() > 2)
    {
        reverse(d.begin() + indices[0], d.begin() + indices.back() + 1);

        bool almostSorted = true;

        for (size_t i = 0; i < n; ++i)
        {
            if (d[i] != dSorted[i])
            {
                almostSorted = false;
            }
        }

        if (almostSorted)
        {

            std::cout << "yes\n";
            std::cout << "reverse " << indices[0] + 1 << " " << indices.back() + 1;
        }
        else
        {
            std::cout << "no";
        }
    }
    else
    {
        std::cout << "no";
    }

    return EXIT_SUCCESS;
}