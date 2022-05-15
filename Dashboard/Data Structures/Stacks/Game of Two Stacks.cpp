
#include <vector>
#include <iostream>

#define endl '\n'

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int g;

    std::cin >> g;

    while (g--)
    {
        int n, m, x, sum = 0, ans = 0, i = -1, j = -1;

        std::cin >> n >> m >> x;

        std::vector<int> vA(n), vB(m);

        while (++i < n)
        {
            std::cin >> vA[i];
        }

        while (++j < m)
        {
            std::cin >> vB[j];
        }

        i = j = 0;

        while (i < n && sum + vA[i] <= x)
        {
            sum += vA[i++];
        }

        ans = i;

        while (j < m && i > -1)
        {
            sum += vB[j++];

            while (sum > x && i)
            {
                sum -= vA[--i];
            }

            if (sum <= x && i + j > ans)
            {
                ans = i + j;
            }
        }

        std::cout << ans << endl;
    }

    return EXIT_SUCCESS;
}