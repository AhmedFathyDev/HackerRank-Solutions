
#include <iostream>
#include <algorithm>

int chars[26];
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
        size_t i = 0, j = 0;
        std::string hackerrank = "hackerrank";

        std::cin >> s;

        while (i < s.size() && j < hackerrank.size())
        {
            if (s[i++] == hackerrank[j])
            {
                ++j;
            }
        }

        if (j == hackerrank.size())
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return EXIT_SUCCESS;
}