
#include <iostream>

bool alphabets[26];
int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;

    std::getline(std::cin, s);

    for (size_t i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
        alphabets[s[i] - 'a'] = 1;
    }

    bool pangram = true;

    for (size_t i = 0; i < 26; ++i)
    {
        if (!alphabets[i])
        {
            pangram = false;
            break;
        }
    }

    std::cout << (pangram ? "pangram" : "not pangram");

    return EXIT_SUCCESS;
}