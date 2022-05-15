
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n, k, s;

    cin >> n >> k;

    vector<int> remArr(k);

    for (size_t i = 0; i < n; i++)
    {
        cin >> s;
        remArr[s % k]++;
    }

    int maxSubset = remArr[0] > 0 ? 1 : 0;

    for (int i = 1; i < (k / 2); i++)
    {
        if (i != k - i)
        {
            maxSubset += max(remArr[i], remArr[k - i]);
        }
        else
        {
            maxSubset++;
        }
    }

    cout << maxSubset;

    return EXIT_SUCCESS;
}