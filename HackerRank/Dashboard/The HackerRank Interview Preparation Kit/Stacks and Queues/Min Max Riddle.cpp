
#include <stack>
#include <vector>
#include <iostream>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, length;

    std::cin >> n;

    std::stack<int> st;
    std::vector<int> arr(n), ans(n + 1), left(n), right(n);

    for (size_t i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < n; ++i)
    {
        left[i] = -1, right[i] = n;
    }

    for (size_t i = 0; i < n; ++i)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            left[i] = st.top();
        }

        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (int i = n - 1; i > -1; --i)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            right[i] = st.top();
        }

        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (size_t i = 0; i < n; ++i)
    {
        length = right[i] - left[i] - 1;
        ans[length] = MAX(ans[length], arr[i]);
    }

    arr.clear(), left.clear(), right.clear();

    for (int i = n - 1; i > 0; --i)
    {
        ans[i] = MAX(ans[i], ans[i + 1]);
    }

    for (size_t i = 1; i <= n; ++i)
    {
        std::cout << ans[i] << " ";
    }

    return EXIT_SUCCESS;
}