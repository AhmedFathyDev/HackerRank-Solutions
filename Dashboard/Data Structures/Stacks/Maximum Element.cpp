
#include <stack>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;
    std::stack<int> st;
    std::stack<int> maxElement;

    std::cin >> n;

    while (n--)
    {
        int type;

        std::cin >> type;

        switch (type)
        {
        case 1:
            int x;

            std::cin >> x;

            if (st.empty() || x > maxElement.top())
            {
                maxElement.push(x);
            }
            else
            {
                maxElement.push(maxElement.top());
            }

            st.push(x);
            break;

        case 2:
            if (st.size())
            {
                maxElement.pop();
                st.pop();
            }
            break;

        case 3:
            if (st.size())
            {
                std::cout << maxElement.top() << endl;
            }
            break;
        }
    }

    return EXIT_SUCCESS;
}