
# Caesar Cipher
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, k;
    std::string s;

    std::cin >> n >> s >> k;

    std::string lowerAlphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string upperAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    k %= 26;

    for (size_t i = 0; i < n; ++i)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                s[i] = lowerAlphabet[(s[i] - 'a' + k) % 26];
            }
            else
            {
                s[i] = upperAlphabet[(s[i] - 'A' + k) % 26];
            }
        }
    }

    std::cout << s;

    return EXIT_SUCCESS;
}
```