
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, q;

    cin >> n >> q;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int k;

        cin >> k;

        v[i].resize(k);

        for (int j = 0; j < k; j++)
        {
            cin >> v[i][j];
        }
    }

    while (q--)
    {
        int i, j;

        cin >> i >> j;

        cout << v[i][j] << "\n";
    }

    return EXIT_SUCCESS;
}