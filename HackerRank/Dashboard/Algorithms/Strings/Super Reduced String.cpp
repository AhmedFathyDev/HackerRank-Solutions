
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;
    int length;

    std::cin >> s;

    do
    {
        std::string s2;
        length = s.size();

        for (size_t j = 0; j < s.size(); ++j)
        {
            if (s[j] != s[j + 1] || j == s.size() - 1)
            {
                s2 += s[j];
            }
            else
            {
                ++j;
            }
        }

        s = s2;
    } while (length != s.size());

    std::cout << (s.size() ? s : "Empty String");

    return EXIT_SUCCESS;
}