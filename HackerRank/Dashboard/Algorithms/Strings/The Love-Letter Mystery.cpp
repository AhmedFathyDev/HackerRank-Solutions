
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int q;

    std::cin >> q;
    
    while (q--)
    {
        std::string s;

        std::cin >> s;

        int operations = 0, sSize = s.size();

        for (size_t i = 0; i < sSize / 2; ++i)
        {
            operations += abs(s[i] - s[sSize - i - 1]);
        }

        std::cout << operations << '\n';
    }

    return EXIT_SUCCESS;
}