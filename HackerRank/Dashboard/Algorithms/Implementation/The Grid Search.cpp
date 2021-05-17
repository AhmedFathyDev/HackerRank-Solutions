
#include <vector>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while (t--)
    {
        int R, C;
        std::cin >> R >> C;

        std::vector<std::string> G(R);
        for (size_t i = 0; i < R; ++i)
        {
            std::cin >> G[i];
        }

        int r, c;
        std::cin >> r >> c;

        std::vector<std::string> P(r);
        for (size_t i = 0; i < r; ++i)
        {
            std::cin >> P[i];
        }

        bool found = false;

        for (size_t i = 0; i < R; ++i)
        {
            for (size_t j = 0; j < C; ++j)
            {
                if (G[i][j] == P[0][0])
                {
                    bool flag = true;

                    for (size_t k = 0; k < r; ++k)
                    {
                        for (size_t l = 0; l < c; ++l)
                        {
                            if ((k + i < R && l + j < C) && (G[i + k][j + l] == P[k][l]))
                            {
                                continue;
                            }
                            else
                            {
                                flag = false;
                                break;
                            }
                        }

                        if (!flag)
                        {
                            break;
                        }
                    }

                    if (flag)
                    {
                        found = true;
                    }
                }
            }
        }

        std::cout << (found ? "YES" : "NO") << "\n";
    }

    return EXIT_SUCCESS;
}