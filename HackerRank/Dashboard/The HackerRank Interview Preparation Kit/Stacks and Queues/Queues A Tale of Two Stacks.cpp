
#include <queue>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::queue<int> qu;

    int q;

    std::cin >> q;

    while (q--)
    {
        int type;

        std::cin >> type;

        switch (type)
        {
        case 1:
            int x;
            std::cin >> x;
            qu.push(x);
            break;
        case 2:
            qu.pop();
            break;
        default:
            std::cout << qu.front() << "\n";
            break;
        }
    }

    return EXIT_SUCCESS;
}