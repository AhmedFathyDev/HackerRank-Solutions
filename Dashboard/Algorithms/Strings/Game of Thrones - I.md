
# Game of Thrones - I
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

int characters_frequency[26];

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;

    std::cin >> s;

    int s_size = s.size(), odd_characters = 0;

    for (size_t i = 0; i < s_size; ++i)
    {
        characters_frequency[s[i] - 'a']++;
    }

    for (size_t i = 0; i < 26; ++i)
    {
        if (characters_frequency[i] & 1)
        {
            odd_characters++;
        }
    }

    std::cout << (odd_characters > 1 ? "NO" : "YES");

    return EXIT_SUCCESS;
}
```