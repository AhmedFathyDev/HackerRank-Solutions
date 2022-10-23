
# String Construction
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    while (n--)
    {
        std::string s;

        std::cin >> s;

        int min_cost = 0;
        int s_size = s.size();
        bool characters_frequency[26];

        for (size_t i = 0; i < 26; ++i)
        {
            characters_frequency[i] = false;
        }

        for (size_t i = 0; i < s_size; ++i)
        {
            if (!characters_frequency[s[i] - 'a'])
            {
                min_cost++;
            }
            characters_frequency[s[i] - 'a'] = true;
        }

        std::cout << min_cost << '\n';
    }

    return EXIT_SUCCESS;
}
```