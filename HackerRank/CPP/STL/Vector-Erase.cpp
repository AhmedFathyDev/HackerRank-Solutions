
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, x, a, b;

    cin >> N;

    vector<int> V(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    cin >> x >> a >> b;

    V.erase(V.begin() + x - 1);
    V.erase(V.begin() + a - 1, V.begin() + b - 1);
    
    cout << V.size() << '\n';
    
    for (size_t i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }

    return EXIT_SUCCESS;
}