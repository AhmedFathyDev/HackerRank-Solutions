
#include <stack>
#include <iostream>

#define endl '\n'

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;
    std::stack<std::string> stk;

    int q;

    std::cin >> q;

    while (q--)
    {
        int type, k;
        std::string w;

        std::cin >> type;

        switch (type)
        {
        case 1:
            std::cin >> w;
            stk.push(s);
            s += w;
            break;

        case 2:
            std::cin >> k;
            stk.push(s);
            s.resize(s.size() - k);
            break;

        case 3:
            std::cin >> k;
            std::cout << s[k - 1] << endl;
            break;

        case 4:
            if (stk.size())
            {
                s = stk.top();
                stk.pop();
            }
            break;
        }
    }

    return EXIT_SUCCESS;
}