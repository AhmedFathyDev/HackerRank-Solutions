
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, Q, Y;

    cin >> N;

    vector<int> X(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    sort(X.begin(), X.end());

    cin >> Q;

    while (Q--)
    {
        cin >> Y;
        cout << (X[lower_bound(X.begin(), X.end(), Y) - X.begin()] != Y ?
            "No " : "Yes ") << lower_bound(X.begin(), X.end(), Y) - X.begin() + 1 << '\n';
    }

    return EXIT_SUCCESS;
}