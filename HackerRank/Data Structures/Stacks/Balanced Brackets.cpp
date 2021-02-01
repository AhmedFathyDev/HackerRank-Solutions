
#include <stack>
#include <iostream>

#define endl '\n'

bool isSameBracket(char, char);
std::string isBalanced(std::string);

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    while (n--)
    {
        std::string str;

        std::cin >> str;

        std::cout << isBalanced(str) << endl;
    }

    return EXIT_SUCCESS;
}

bool isSameBracket(char openBracket, char closeBracket)
{
    if (openBracket == '{')
    {
        return closeBracket == '}';
    }
    if (openBracket == '(')
    {
        return closeBracket == ')';
    }
    return closeBracket == ']';
}

std::string isBalanced(std::string str)
{
    std::stack<char> sk;

    for (char ch : str)
    {
        if (ch == '{' || ch == '(' || ch == '[')
        {
            sk.push(ch);
        }
        else
        {
            if (sk.empty() || !isSameBracket(sk.top(), ch))
            {
                return "NO";
            }
            else
            {
                sk.pop();
            }
        }
    }

    return sk.size() ? "NO" : "YES";
}