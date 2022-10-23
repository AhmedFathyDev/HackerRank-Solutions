
# Palindrome Index
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

int palindrome_index(std::string s)
{
    int s_size = s.size();

    for (int i = 0, j = s_size - 1; i < s_size / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            if (s[i + 1] == s[j])
            {
                if (s[i] == s[j - 1] && s[i + 1] == s[j - 2])
                {
                    return j;
                }
                else
                {
                    return i;
                }
            }
            else if (s[j - 1] == s[i])
            {
                return j;
            }
        }
    }
    
    return -1;
}

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

        std::cout << palindrome_index(s) << '\n';
    }

    return EXIT_SUCCESS;
}
```