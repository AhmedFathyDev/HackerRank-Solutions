
# Two Strings
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int p;

    std::cin >> p;

    while (p--)
    {
        std::string s1, s2;

        std::cin >> s1 >> s2;

        int s1_size = s1.size();
        int s2_size = s2.size();

        int s1_characters_frequency[26];

        bool share_common_substring = false;

        for (size_t i = 0; i < 26; ++i)
        {
            s1_characters_frequency[i] = 0;
        }

        for (size_t i = 0; i < s1_size; ++i)
        {
            s1_characters_frequency[s1[i] - 'a']++;
        }

        for (size_t i = 0; i < s2_size; ++i)
        {
            if (s1_characters_frequency[s2[i] - 'a'])
            {
                share_common_substring = true;
                break;
            }
        }

        std::cout << (share_common_substring ? "YES" : "NO") << '\n';
    }

    return EXIT_SUCCESS;
}
```