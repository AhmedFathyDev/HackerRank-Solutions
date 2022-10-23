
# Separate the Numbers
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

        int sSize = s.size();
        bool isBeautiful = false;
        long long prevNumber = -1;

        for (size_t i = 1; i <= sSize / 2; ++i)
        {
            long long number = stol(s.substr(0, i));
            prevNumber = number;

            std::string test = std::to_string(number);
            
            while (test.size() < sSize)
            {
                test += std::to_string(++number);
            }

            if (test == s)
            {
                isBeautiful = true;
                break;
            }
        }

        if (isBeautiful)
        {
            std::cout << "YES " << prevNumber << '\n';
        }
        else
        {
            std::cout << "NO" << '\n';
        }
    }

    return EXIT_SUCCESS;
}
```