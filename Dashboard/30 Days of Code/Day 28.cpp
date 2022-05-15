
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n;

    cin >> n;

    vector<string> v;
    string firstName, emailID;

    for (size_t i = 0; i < n; i++)
    {
        cin >> firstName >> emailID;
        if (emailID.find("@gmail.com") != string::npos)
        {
            v.push_back(firstName);
        }
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return EXIT_SUCCESS;
}