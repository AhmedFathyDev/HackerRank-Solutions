
//  To more understand watch this: https://youtu.be/ZmnqCZp9bBs

#include <stack>
#include <vector>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, i = 0, maxArea = 0, area, top;

    std::cin >> n;

    std::stack<int> st;
    std::vector<int> v(n);

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    while (i < n)
    {
        if (st.empty() || v[st.top()] <= v[i])
        {
            st.push(i++);
        }
        else
        {
            top = st.top();
            st.pop();

            if (st.empty())
            {
                area = v[top] * i;
            }
            else
            {
                area = v[top] * (i - st.top() - 1);
            }

            maxArea = MAX(area, maxArea);
        }
    }

    while (st.size())
    {
        top = st.top();
        st.pop();

        if (st.empty())
        {
            area = v[top] * i;
        }
        else
        {
            area = v[top] * (i - st.top() - 1);
        }

        maxArea = MAX(area, maxArea);
    }

    std::cout << maxArea;

    return EXIT_SUCCESS;
}