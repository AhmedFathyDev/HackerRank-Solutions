
# Two Characters
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

int characters_frequency[26];

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int length_of_s, longest_s_length = 0;
    std::string s;

    std::cin >> length_of_s >> s;

    for (size_t i = 0; i < length_of_s; ++i)
    {
        characters_frequency[s[i] - 'a']++;
    }

    for (size_t i = 0; i < 26; ++i)
    {
        for (size_t j = i + 1; j < 26; ++j)
        {
            if (!characters_frequency[i] || !characters_frequency[j])
            {
                continue;
            }
            
            bool valid = true;
            std::string longest_s;

            for (size_t k = 0; k < length_of_s; ++k)
            {
                if (s[k] == char(i + 'a') || s[k] == char(j + 'a'))
                {
                    if (s[k] == longest_s.back())
                    {
                        valid = false;
                        break;
                    }
                    else
                    {
                        longest_s += s[k];
                    }
                }
            }

            if (valid)
            {
                longest_s_length = MAX(longest_s.size(), longest_s_length);
            }
        }
    }

    std::cout << longest_s_length;

    return EXIT_SUCCESS;
}
```