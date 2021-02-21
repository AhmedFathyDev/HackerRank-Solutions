
#include <stack>
#include <vector>
#include <iostream>

#define endl '\n'
#define MIN(X, Y) (X < Y ? X : Y)
#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, mn, mx = 0;
    std::cin >> n;

    std::stack<int> stk;
    std::vector<int> p(n);
    std::vector<int> days(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }

    mn = p[0];
    stk.push(0);

    for (size_t i = 1; i < n; i++)
    {
        if (p[i] > p[i - 1])
        {
            days[i] = 1;
        }

        mn = MIN(mn, p[i]);

        while (stk.size() && p[i] <= p[stk.top()])
        {
            if (p[i] > mn)
            {
                days[i] = MAX(days[i], days[stk.top()] + 1);
            }

            stk.pop();
        }

        mx = MAX(mx, days[i]);
        stk.push(i);
    }

    std::cout << mx;

    return EXIT_SUCCESS;
}