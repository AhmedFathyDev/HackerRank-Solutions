
#include <queue>
#include <vector>
#include <iostream>

#define endl '\n'

int goalX, goalY;
std::vector<std::vector<int>> grid;

int minimumMoves(int x, int y)
{
    return 0;
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, startX, startY;

    std::cin >> n;

    grid.resize(n, std::vector<int> (n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> grid[i][j];
        }
    }

    std::cin >> startX >> startY >> goalX >> goalY;

    std::cout << minimumMoves(startX, startY);

    return EXIT_SUCCESS;
}