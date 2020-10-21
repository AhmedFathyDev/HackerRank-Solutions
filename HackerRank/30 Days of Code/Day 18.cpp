
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution
{
private:
    stack<char> st;
    queue<char> qu;

public:
    void pushCharacter(char ch)
    {
        this->st.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        this->qu.push(ch);
    }

    char popCharacter(void)
    {
        char ch = this->st.top();
        this->st.pop();

        return ch;
    }

    char dequeueCharacter(void)
    {
        char ch = this->qu.front();
        this->qu.pop();

        return ch;
    }
};