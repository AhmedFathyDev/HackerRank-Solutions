
#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    while (a <= b)
    {
        switch (a)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        default:
            cout << (a & 1 ? "odd" : "even");
            break;
        }
        cout << "\n";
        a++;
    }

    return EXIT_SUCCESS;
}