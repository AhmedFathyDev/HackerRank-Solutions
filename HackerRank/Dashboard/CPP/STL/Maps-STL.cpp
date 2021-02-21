
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    int Q, type, Y;
    string X;
    map<string, int> mp;

    cin >> Q;

    while (Q--)
    {
        cin >> type >> X;

        switch (type)
        {
        case 1:
            cin >> Y;
            mp[X] += Y;
            break;
        case 2:
            mp.erase(X);
            break;
        default:
            cout << mp[X] << "\n";
        }
    }

    return EXIT_SUCCESS;
}