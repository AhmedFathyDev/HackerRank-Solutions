
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, gemstones = 0, *various_rocks = new int[26];

    std::cin >> n;

    std::string *arr = new std::string[n];

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> arr[i];

        bool *rocks = new bool[26];
        int arr_of_i_size = arr[i].size();

        for (size_t j = 0; j < arr_of_i_size; ++j)
        {
            rocks[arr[i][j] - 'a'] = true;
        }

        for (size_t j = 0; j < 26; ++j)
        {
            various_rocks[j] += rocks[j];

            if (various_rocks[j] == n)
            {
                gemstones++;
            }
        }
    }

    std::cout << gemstones;

    return EXIT_SUCCESS;
}