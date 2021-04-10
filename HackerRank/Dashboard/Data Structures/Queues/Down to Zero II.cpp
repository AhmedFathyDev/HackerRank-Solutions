
#include <vector>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::vector<int> movesCount(1000001, -1);

    movesCount[0] = 0;

    for (int i = 1; i < 1000001; ++i)
    {
        if (movesCount[i] == -1 || movesCount[i] > (movesCount[i - 1] + 1))
        {
            movesCount[i] = movesCount[i - 1] + 1;
        }

        for (int j = 1; j <= i && j * i < 1000001; ++j)
        {
            if (movesCount[j * i] == -1 || (movesCount[i] + 1) < movesCount[j * i])
            {
                movesCount[j * i] = movesCount[i] + 1;
            }
        }
    }

    int q;
    std::cin >> q;
    while (q--)
    {
        int n;
        std::cin >> n;
        std::cout << movesCount[n] << endl;
    }

    return EXIT_SUCCESS;
}