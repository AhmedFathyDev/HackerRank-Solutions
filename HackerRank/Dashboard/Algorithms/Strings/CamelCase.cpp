
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int numberOfWords = 1;

    std::string s;

    std::cin >> s;

    for (size_t i = 0; i < s.size(); ++i)
    {
        if (isupper(s[i]))
        {
            ++numberOfWords;
        }
    }

    std::cout << numberOfWords;

    return EXIT_SUCCESS;
}