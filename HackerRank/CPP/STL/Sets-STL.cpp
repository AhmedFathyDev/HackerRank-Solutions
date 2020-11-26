
#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int Q, y, x;
    set<int> st;

    cin >> Q;

    while (Q--)
    {
        cin >> y >> x;

        switch (y)
        {
        case 1:
            st.insert(x);
            break;
        case 2:
            st.erase(x);
            break;
        default:
            if (st.find(x) == st.end())
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
        }
    }

    return EXIT_SUCCESS;
}