
#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    *a = *a + *b;
    *b = abs(*a - *b - *b);
}

int main(void)
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;

    update(pa, pb);

    cout << a << "\n"
         << b;

    return EXIT_SUCCESS;
}