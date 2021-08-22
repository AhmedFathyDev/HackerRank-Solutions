
#include <iostream>

bool weights[10 * 1000 * 1000];

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;
    std::string s;
    int multipliers = 1;
    char prevChar = 'A';
    
    std::cin >> s >> n;
    
    for (size_t i = 0; i < s.size(); ++i)
    {
        int w = s[i] - 'a' + 1;

        if (s[i] == prevChar)
        {
            multipliers++;
            w *= multipliers;
        }
        else
        {
            multipliers = 1;
        }

        prevChar = s[i];
        weights[w] = true;
    }

    while (n--)
    {
        int q;

        std::cin >> q;

        std::cout << (weights[q] ? "Yes" : "No") << '\n';
    }

    return EXIT_SUCCESS;
}