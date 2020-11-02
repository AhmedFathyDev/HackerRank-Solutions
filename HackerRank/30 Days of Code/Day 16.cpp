
#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string S;

    cin >> S;

    try
    {
        int n = stoi(S);
        cout << n;
    }
    catch (const invalid_argument &ia)
    {
        cout << "Bad String";
    }

    return EXIT_SUCCESS;
}