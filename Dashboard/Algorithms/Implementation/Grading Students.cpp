
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define PI acos(-1)
#define CEIL(X, Y) (((X) + (Y) - 1) / (Y))
#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))
#define MIN(X, Y) ((X) > (Y) ? (Y) : (X))
#define NUMBER_OF_DIGITS(X) floor(1 + log10(X))
#define TOGGLE_CASE(CHARACTER) ((CHARACTER) ^ (1 << 5))
#define WATCH(X) std::cout << (#X) << " = " << X << endl
#define SWAP(X, Y) ((X) ^= (Y)), ((Y) ^= (X)), ((X) ^= (Y))
#define SET_BIT(VARIABLE, INDEX) ((VARIABLE) | 1 << (INDEX))

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while (n--)
    {
        int grade;
        cin >> grade;
        
        if (grade >= 38 && (grade % 5) >= 3)
            cout << grade + (5 - (grade % 5)) << endl;
        else
            cout << grade << endl;
    }

    return EXIT_SUCCESS;
}
