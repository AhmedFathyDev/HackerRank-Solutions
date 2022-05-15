
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    long int n, m;
    cin >> n >> m;

    vector<vector<long int>> queries(m, vector<long int>(3));
    vector<long int> Vn(n + 2);
    long int mx = 0;

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin >> queries[i][j];
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        Vn[queries[i][0]] += queries[i][2];
        Vn[queries[i][1] + 1] -= queries[i][2];
    }

    for (size_t i = 1; i <= n; i++)
    {
        Vn[i] += Vn[i - 1];
        mx = max(mx, Vn[i]);
    }

    cout << mx;

    return 0;
}