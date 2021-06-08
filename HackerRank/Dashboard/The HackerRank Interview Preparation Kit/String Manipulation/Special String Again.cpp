
#include <iostream>
#include <vector>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, count, ans = 0;
    std::string s;
    char ch = '0';

    std::cin >> n >> s;

    std::vector<std::pair<char, int>> tuples;

    for (size_t i = 0; i < n; ++i)
    {
        if (s[i] == ch)
        {
            ++count;
        }
        else
        {
            if (ch != '0')
            {
                tuples.push_back({ch, count});
            }
            ch = s[i];
            count = 1;
        }
    }
    tuples.push_back({ch, count});

    for (size_t i = 0; i < tuples.size(); ++i)
    {
        ans += (tuples[i].second * (tuples[i].second + 1)) / 2;
    }

    for (size_t i = 1; i < tuples.size() - 1; ++i)
    {
        if (tuples[i - 1].first == tuples[i + 1].first && tuples[i].second == 1)
        {
            ans += MIN(tuples[i + 1].second, tuples[i - 1].second);
        }
    }

    std::cout << ans;
    
    return EXIT_SUCCESS;
}