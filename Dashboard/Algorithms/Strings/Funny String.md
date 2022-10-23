
# Funny String
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>
#include <algorithm>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int q;

    std::cin >> q;

    while (q--)
    {
        std::string s, sReverse;

        std::cin >> s;

        sReverse = s;
        reverse(sReverse.begin(), sReverse.end());

        bool funny = true;
        int sSize = s.size();

        for (size_t i = 0; i < sSize - 1; ++i)
        {
            if (abs(s[i] - s[i + 1]) != abs(sReverse[i] - sReverse[i + 1]))
            {
                funny = false;
                break;
            }
        }

        std::cout << (funny ? "Funny" : "Not Funny") << '\n';
    }

    return EXIT_SUCCESS;
}
```