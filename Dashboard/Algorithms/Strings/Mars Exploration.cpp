
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;

    int changedLetters = 0;

    std::cin >> s;

    for (size_t i = 0; i < s.size() - 2; i += 3)
    {
        changedLetters += s[i] == 'S' ? 0 : 1;
        changedLetters += s[i + 1] == 'O' ? 0 : 1;
        changedLetters += s[i + 2] == 'S' ? 0 : 1;
    }

    std::cout << changedLetters;

    return EXIT_SUCCESS;
}