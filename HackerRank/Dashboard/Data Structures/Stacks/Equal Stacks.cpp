
#include <stack>
#include <iostream>

#define endl '\n'
#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    size_t stack1Size, stack2Size, stack3Size;
    int stack1Sum = 0, stack2Sum = 0, stack3Sum = 0;

    std::cin >> stack1Size >> stack2Size >> stack3Size;

    std::stack<int> stack1, stack2, stack3;
    std::stack<int> stack1Rev, stack2Rev, stack3Rev;

    while (stack1Size--)
    {
        int x;
        std::cin >> x;
        stack1Rev.push(x);
        stack1Sum += x;
    }

    while (stack2Size--)
    {
        int x;
        std::cin >> x;
        stack2Rev.push(x);
        stack2Sum += x;
    }

    while (stack3Size--)
    {
        int x;
        std::cin >> x;
        stack3Rev.push(x);
        stack3Sum += x;
    }

    while (stack1Rev.size())
    {
        stack1.push(stack1Rev.top());
        stack1Rev.pop();
    }

    while (stack2Rev.size())
    {
        stack2.push(stack2Rev.top());
        stack2Rev.pop();
    }

    while (stack3Rev.size())
    {
        stack3.push(stack3Rev.top());
        stack3Rev.pop();
    }

    stack1Size = stack1Sum;
    stack2Size = stack2Sum;
    stack3Size = stack3Sum;

    while (stack1Size != stack2Size || stack2Size != stack3Size)
    {
        if (stack1Size >= stack2Size && stack1Size >= stack3Size)
        {
            stack1Size -= stack1.top();
            stack1.pop();
        }
        else if (stack2Size >= stack1Size && stack2Size >= stack3Size)
        {
            stack2Size -= stack2.top();
            stack2.pop();
        }
        else
        {
            stack3Size -= stack3.top();
            stack3.pop();
        }
    }

    std::cout << stack1Size;

    return EXIT_SUCCESS;
}