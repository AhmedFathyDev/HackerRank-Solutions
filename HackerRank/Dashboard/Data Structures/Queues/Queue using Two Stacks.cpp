
#include <queue>
#include <iostream>

#define endl '\n'

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int q;

    std::cin >> q;

    std::queue<int> que;

    while (q--)
    {
        int type;

        std::cin >> type;

        switch (type)
        {
        case 1:
            int x;
            std::cin >> x;
            que.push(x);
            break;

        case 2:
            if (que.size())
            {
                que.pop();
            }
            break;
        case 3:
            if (que.size())
            {
                std::cout << que.front() << endl;
            }
        }
    }

    return EXIT_SUCCESS;
}