
#include <vector>
#include <iostream>

void set(std::vector<std::vector<char>> &, int, int, char);
void detonate(std::vector<std::vector<char>> &, std::vector<std::vector<char>> &, int, int);

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;
    size_t r, c;

    std::cin >> r >> c >> n;

    std::vector<std::vector<char>> map(r, std::vector<char>(c, 'O'));
    std::vector<std::vector<char>> grid(r, std::vector<char>(c, '.'));

    for (size_t i = 0; i < r; ++i)
    {
        std::string str;
        std::cin >> str;

        for (size_t j = 0; j < c; ++j)
        {
            grid[i][j] = str[j];
        }
    }

    if (!(n & 1))
    {
        set(grid, r, c, 'O');
    }
    else if ((n + 1) % 4 == 0)
    {
        detonate(grid, map, r, c);
    }
    else if ((n - 1) % 4 == 0 && n != 1)
    {
        detonate(grid, map, r, c);
        detonate(grid, map, r, c);
    }

    for (size_t i = 0; i < r; ++i)
    {
        for (size_t j = 0; j < c; ++j)
        {
            std::cout << grid[i][j];
        }
        std::cout << '\n';
    }

    return EXIT_SUCCESS;
}

void set(std::vector<std::vector<char>> &grid, int r, int c, char ch)
{
    for (size_t i = 0; i < r; ++i)
    {
        for (size_t j = 0; j < c; ++j)
        {
            grid[i][j] = ch;
        }
    }
}

void detonate(std::vector<std::vector<char>> &grid, std::vector<std::vector<char>> &map, int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (grid[i][j] == 'O')
            {
                if (i - 1 >= 0 && grid[i - 1][j] != 'O')
                {
                    map[i - 1][j] = '.';
                }
                if (i + 1 < r && grid[i + 1][j] != 'O')
                {
                    map[i + 1][j] = '.';
                }
                if (j - 1 >= 0 && grid[i][j - 1] != 'O')
                {
                    map[i][j - 1] = '.';
                }
                if (j + 1 < c && grid[i][j + 1] != 'O')
                {
                    map[i][j + 1] = '.';
                }

                map[i][j] = '.';
            }
        }
    }
    grid = map;
    set(map, r, c, 'O');
}