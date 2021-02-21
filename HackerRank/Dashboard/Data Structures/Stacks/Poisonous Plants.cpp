
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

    std::stack<int> stkDays;
    std::stack<int> stkPlant;

    while (n--)
    {
        int plant, day = 0;
        std::cin >> plant;

        while (stkPlant.size() && stkPlant.top() >= plant)
        {
            day = MAX(day, stkDays.top());

            stkDays.pop();
            stkPlant.pop();
        }

        day = stkDays.size() ? day + 1 : 0;

        mx = MAX(mx, day);

        stkDays.push(day);
        stkPlant.push(plant);
    }

    std::cout << mx;

    return EXIT_SUCCESS;
}