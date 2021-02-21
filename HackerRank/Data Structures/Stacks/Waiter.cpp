
#include <queue>
#include <stack>
#include <vector>
#include <iostream>

#define endl '\n'

const int N = 1e6 + 6;
bool prime[100000000];

void sieve(void)
{
    for (int i = 0; i < N; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 4; i < N; i += 2)
    {
        prime[i] = 0;
    }
    for (int i = 3; i * i < N; i += 2)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i + i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    sieve();

    std::queue<int> queA;
    std::stack<int> stkA;
    std::stack<int> stkB;
    std::vector<int> primes;
    std::vector<int> answer;

    for (size_t i = 2; i < N; i++)
    {
        if (prime[i])
        {
            primes.push_back(i);
        }
    }

    int n, q;

    std::cin >> n >> q;

    while (n--)
    {
        int number;
        std::cin >> number;
        stkA.push(number);
    }

    for (size_t i = 0; i < q; i++)
    {
        while (stkA.size())
        {
            if (stkA.top() % primes[i] == 0)
            {
                stkB.push(stkA.top());
            }
            else
            {
                queA.push(stkA.top());
            }

            stkA.pop();
        }

        while (queA.size())
        {
            stkA.push(queA.front());
            queA.pop();
        }

        while (stkB.size())
        {
            answer.push_back(stkB.top());
            stkB.pop();
        }
    }

    while (stkA.size())
    {
        answer.push_back(stkA.top());
        stkA.pop();
    }

    for (size_t i = 0; i < answer.size(); i++)
    {
        std::cout << answer[i] << endl;
    }

    return EXIT_SUCCESS;
}