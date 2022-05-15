
#include <iostream>

constexpr unsigned exponent = 31;
constexpr unsigned two_to_exponent = 1u << exponent;

int popcount(unsigned x)
{
    char i = -1, count = 0;
    unsigned mask = 1;

    while (++i < 32)
    {
        if (x & mask)
        {
            ++count;
        }

        mask <<= 1;
    }

    return count;
}

unsigned solvePEven(unsigned n, unsigned s, unsigned p, unsigned q)
{

    if (p == 0)
    {
        if (s == q)
        {
            return 1;
        }
        return 2;
    }

    if (s == 0 && q == 0)
    {
        return 1;
    }

    unsigned a1_minus_a0 = (p - 1) * s + q;
    unsigned numerator = exponent - popcount((a1_minus_a0 & -a1_minus_a0) - 1);
    unsigned denominator = popcount((p & -p) - 1);
    unsigned m = numerator / denominator + (numerator % denominator == 0 ? 1 : 2);

    return std::min(m, n);
}

unsigned solvePOdd(unsigned n, unsigned s, unsigned p, unsigned q)
{

    if (p == 1)
    {
        return q == 0 ? 1 : std::min(n, two_to_exponent / (q & -q));
    }

    if (s == 0 && q == 0)
    {
        return 1;
    }

    unsigned m = 1;
    unsigned long long p_minus_1 = p - 1;
    unsigned long long a1_minus_a0 = p_minus_1 * s + q;
    unsigned long long p_to_m = p;
    unsigned long long mask = (two_to_exponent * (p_minus_1 & -p_minus_1) / (a1_minus_a0 & -a1_minus_a0)) - 1;

    while (m < n && (p_to_m & mask) != 1)
    {
        p_to_m = p_to_m * p_to_m;
        m = m * 2;
    }

    return std::min(m, n);
}

int main(void)
{
    unsigned n, s, p, q;

    std::cin >> n >> s >> p >> q;

    std::cout << (p & 1 ? solvePOdd(n, s, p, q) : solvePEven(n, s, p, q));

    return EXIT_SUCCESS;
}