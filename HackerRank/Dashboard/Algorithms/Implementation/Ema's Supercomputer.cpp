
#include <vector>
#include <iostream>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, m, answer = 0;

    std::cin >> n >> m;

    std::vector<std::vector<char>> grid(n + 2, std::vector<char>(m + 2, 'O'));

    for (size_t i = 1; i <= n; ++i)
    {
        for (size_t j = 1; j <= m; ++j)
        {
            std::cin >> grid[i][j];
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            int k = 0;

            while (grid[i + k][j] == 'G' && grid[i - k][j] == 'G' && grid[i][j + k] == 'G' && grid[i][j - k] == 'G')
            {
                grid[i + k][j] = grid[i - k][j] = grid[i][j + k] = grid[i][j - k] = 'g';

                for (int I = 1; I <= n; ++I)
                {
                    for (int J = 1; J <= m; ++J)
                    {
                        int K = 0;

                        while (grid[I + K][J] == 'G' && grid[I - K][J] == 'G' && grid[I][J + K] == 'G' && grid[I][J - K] == 'G')
                        {
                            answer = MAX(answer, (4 * k + 1) * (4 * K + 1));
                            ++K;
                        }
                    }
                }

                ++k;
            }

            k = 0;

            while (grid[i + k][j] == 'g' && grid[i - k][j] == 'g' && grid[i][j + k] == 'g' && grid[i][j - k] == 'g')
            {
                grid[i + k][j] = grid[i - k][j] = grid[i][j + k] = grid[i][j - k] = 'G';
                ++k;
            }
        }
    }

    std::cout << answer;

    return EXIT_SUCCESS;
}