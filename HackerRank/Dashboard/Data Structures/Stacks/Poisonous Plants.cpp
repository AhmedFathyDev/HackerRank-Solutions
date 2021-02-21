
//  To more understand watch this: -> https://youtu.be/QKkShXV-2cY

#include <stack>
#include <vector>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, mx = 0;
    std::cin >> n;

    std::vector<int> p(n);
    std::stack<int> stkDays;
    std::stack<int> stkPlant;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        int day = 0;

        while (stkPlant.size() && stkPlant.top() >= p[i])
        {
            day = MAX(day, stkDays.top());

            stkDays.pop();
            stkPlant.pop();
        }

        day = stkDays.size() ? day + 1 : 0;

        mx = MAX(mx, day);

        stkDays.push(day);
        stkPlant.push(p[i]);
    }

    std::cout << mx;

    return EXIT_SUCCESS;
}