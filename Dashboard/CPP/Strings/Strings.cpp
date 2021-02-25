
#include <iostream>

using namespace std;

int main(void)
{
    string str1, str2;

    cin >> str1 >> str2;

    cout << str1.size() << " " << str2.size() << "\n";
    cout << str1 << str2 << "\n";

    swap(str1[0], str2[0]);

    cout << str1 << " " << str2;

    return EXIT_SUCCESS;
}