
#include <iostream>

using namespace std;

#define MAX(X, Y) (X > Y ? X : Y)

int max_of_four(int a, int b, int c, int d)
{
    return MAX(a, MAX(b, MAX(c, d)));
}

int main(void)
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d);

    return EXIT_SUCCESS;
}