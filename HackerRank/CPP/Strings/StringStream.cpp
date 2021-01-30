
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream st(str);
    vector<int> a;
    char ch;

    while (!st.eof())
    {
        int x;

        st >> x >> ch;
        a.push_back(x);
    }

    return a;
}

int main(void)
{
    string str;

    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return EXIT_SUCCESS;
}