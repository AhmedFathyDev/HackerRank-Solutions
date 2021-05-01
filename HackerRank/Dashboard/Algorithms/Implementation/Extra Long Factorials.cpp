
#include <vector>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    scanf("%i", &n);
    std::vector<int> ans;
    ans.push_back(1);

    for (int i = 2; i <= n; ++i)
    {
        for (size_t j = 0; j < ans.size(); ++j)
        {
            ans[j] *= i;
        }

        for (size_t j = 0; j < ans.size(); ++j)
        {
            if (ans[j] < 10)
            {
                continue;
            }

            if (j == ans.size() - 1)
            {
                ans.push_back(0);
            }

            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
        }
    }

    for (int i = ans.size() - 1; i > -1; --i)
    {
        printf("%i", ans[i]);
    }

    return EXIT_SUCCESS;
}