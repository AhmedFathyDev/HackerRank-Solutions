
#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cin >> N;

    int *A = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = N - 1; i > -1; i--)
    {
        cout << A[i] << " ";
    }

    return EXIT_SUCCESS;
}