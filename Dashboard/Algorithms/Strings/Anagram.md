
# Anagram
### [Back ⬅️](README.md)

## **C++** solution

```cpp
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

        int s_size = s.size();

        if (s_size & 1)
        {
            std::cout << -1 << '\n';
            continue;
        }

        int minimum_changes = 0;
        int letters_frequency[26];

        for (size_t i = 0; i < 26; ++i)
        {
            letters_frequency[i] = 0;
        }

        for (size_t i = 0; i < s_size / 2; ++i)
        {
            letters_frequency[s[i] - 'a']++;
        }
        for (size_t i = s_size / 2; i < s_size; ++i)
        {
            letters_frequency[s[i] - 'a']--;
        }

        for (size_t i = 0; i < 26; ++i)
        {
            minimum_changes += abs(letters_frequency[i]);
        }

        std::cout << minimum_changes / 2 << '\n';
    }

    return EXIT_SUCCESS;
}
```