
#include <stack>
#include <iostream>
#include <algorithm>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string s;
    std::stack<char> stk;

    std::cin >> s;

    for (size_t i = 0; i < s.size(); ++i)
    {
        if (stk.empty())
        {
            stk.push(s[i]);
        }
        else
        {
            if (stk.top() == s[i])
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
    }

    if (stk.size())
    {
        std::string ans;

        while (stk.size())
        {
            ans += stk.top();
            stk.pop();
        }

        reverse(ans.begin(), ans.end());
        std::cout << ans;
    }
    else
    {
        std::cout << "Empty String";
    }

    return EXIT_SUCCESS;
}