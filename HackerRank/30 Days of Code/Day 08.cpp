
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n;

    cin >> n;

    map<string, string> mp;

    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
    }

    string str;

    while (cin >> str)
    {
        cout << (mp.count(str) == 0 ? "Not found" : str + "=" + mp[str]) << "\n";
    }

    return EXIT_SUCCESS;
}