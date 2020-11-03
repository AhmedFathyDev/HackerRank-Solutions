
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;

    cin >> N;

    vector<int> V(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    sort(V.begin(), V.end());

    for (size_t i = 0; i < N; i++)
    {
        cout << V[i] << " ";
    }

    return EXIT_SUCCESS;
}