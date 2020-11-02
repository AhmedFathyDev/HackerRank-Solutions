
#include <iostream>
#include <vector>

#define endl "\n"

using namespace std;

int n, Croad, Clib;
vector<vector<int>> cities;
vector<bool> visited;

void DFS(int city)
{
    for (size_t i = 0; i < cities[city].size(); i++)
    {
        if (!visited[cities[city][i]])
        {
            visited[cities[city][i]] = 1;
            DFS(i);
        }
    }
}

int minimumCost(void)
{
    visited.resize(n);

    int librariesCount = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            DFS(i);
            librariesCount++;
        }
    }

    visited.clear();

    return (n - librariesCount) * Croad + librariesCount * Clib;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int q;

    cin >> q;

    while (q--)
    {
        int m;

        cin >> n >> m >> Clib >> Croad;

        cities.resize(n);

        while (m--)
        {
            int u, v;

            cin >> u >> v;

            cities[u - 1].push_back(v - 1);
            cities[v - 1].push_back(u - 1);
        }

        if (Clib <= Croad)
        {
            cout << Clib * n << endl;
        }
        else
        {
            cout << minimumCost() << endl;
        }

        cities.clear();
    }

    return EXIT_SUCCESS;
}