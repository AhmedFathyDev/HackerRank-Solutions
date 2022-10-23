
# Making Anagrams
### [Back ⬅️](README.md)

## **C++** solution

```cpp
#include <iostream>
#include <vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int ans = 0;

    std::vector<int> s1Chars(26), s2Chars(26);   

    std::string s1, s2;

    std::cin >> s1 >> s2;

    for (size_t i = 0; i < s1.size(); ++i)
    {
        s1Chars[s1[i] - 'a']++;
    }

    for (size_t i = 0; i < s2.size(); ++i)
    {
        s2Chars[s2[i] - 'a']++;
    }

    for (size_t i = 0; i < 26; ++i)
    {
        ans += abs(s1Chars[i] - s2Chars[i]);
    }

    std::cout << ans;
    
    return EXIT_SUCCESS;
}
```