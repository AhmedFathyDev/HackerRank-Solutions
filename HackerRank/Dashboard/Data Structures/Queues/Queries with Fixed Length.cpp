
#include <queue>
#include <vector>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

std::vector<int> arr;

int solve(int n, int d)
{
    int mx = -1;

    std::queue<int> window;

    for (size_t i = 0; i < d; ++i)
    {
        window.push(arr[i]);
        mx = MAX(mx, arr[i]);
    }

    int mn = mx;

    for (size_t i = 0; (i + d) < n; ++i)
    {
        window.push(arr[i + d]);

        if (window.front() == mx)
        {
            window.pop();
            int windowMx = -1, j = window.size();

            while (j--)
            {
                int integer = window.front();

                window.pop();
                window.push(integer);

                windowMx = MAX(windowMx, integer);
            }

            mx = windowMx;
        }
        else
        {
            window.pop();
        }

        mx = MAX(mx, arr[i + d]);
        mn = MIN(mx, mn);
    }

    return mn;
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, q;

    std::cin >> n >> q;

    arr.resize(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    while (q--)
    {
        int d;

        std::cin >> d;

        std::cout << solve(n, d) << endl;
    }

    return EXIT_SUCCESS;
}