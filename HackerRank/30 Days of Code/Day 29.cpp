
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t, n, k, ans;

    cin >> t;

    while (t--)
    {
        ans = 0;
        cin >> n >> k;

        for (int b = n; b > 0; b--)
        {
            for (int a = b - 1; a > 0; a--)
            {
                if ((a & b) < k && (a & b) > ans)
                {
                    ans = a & b;
                }
            }
        }

        cout << ans << "\n";
    }

    return EXIT_SUCCESS;
}