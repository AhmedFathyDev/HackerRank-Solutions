
#include <vector>
#include <iostream>
#include <algorithm>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;

    std::cin >> s;

    std::vector<int> freq(26);

    for (char ch : s)
    {
        ++freq[ch - 'a'];
    }

    sort(freq.begin(), freq.end());

    int i = 0;

    while (!freq[i])
    {
        ++i;
    }

    int max = freq[25];
    int min = freq[i];

    if (max == min || (max - min == 1 && max > freq[24]) || (min == 1 && freq[i + 1] == max))
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return EXIT_SUCCESS;
}