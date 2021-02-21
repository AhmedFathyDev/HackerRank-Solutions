
#include <stdio.h>
#include <stdlib.h>

#define NOD(x) floor(1 + log10(x))

const int mod = 1e9 + 9;

int fast_power(int base, int power)
{
    if (power == 0)
        return 1;
    if (power == 1)
        return base % mod;
    return (((fast_power(base, power >> 1) * fast_power(base, power >> 1)) % mod) * fast_power(base, power & 1)) % mod;
}

int main(void)
{
    int q, c;
    long int n, p;

    scanf("%li %i", &p, &q);

    c = 0;

    while (p <= q)
    {
        n = p * p;
        if (n / fast_power(10, NOD(p)) + n % fast_power(10, NOD(p)) == p++)
        {
            printf("%li ", p - 1), c++;
        }
    }

    if (!c)
    {
        printf("INVALID RANGE");
    }

    return EXIT_SUCCESS;
}