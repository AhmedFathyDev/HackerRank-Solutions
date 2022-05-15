
#include <vector>
#include <iostream>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s1, s2;

    std::cin >> s1 >> s2;

    std::vector<std::vector<int>> commonChild(s1.size() + 1, std::vector<int>(s2.size() + 1));

    for (int i = 0; i < s1.size(); ++i)
    {
        for (int j = 0; j < s2.size(); ++j)
        {
            if (s1[i] == s2[j])
            {
                commonChild[i + 1][j + 1] = commonChild[i][j] + 1;
            }
            else
            {
                commonChild[i + 1][j + 1] = MAX(commonChild[i + 1][j], commonChild[i][j + 1]);
            }
        }
    }

    std::cout << commonChild[s1.size()][s2.size()];

    return EXIT_SUCCESS;
}