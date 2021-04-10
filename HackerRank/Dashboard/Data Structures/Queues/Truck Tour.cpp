
#include <vector>
#include <iostream>

#define endl '\n'
#define petrol first
#define distance second

int main(void)
{
    std::ios_base::sync_with_stdio(false);

    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, petrolCapacity, front, back;

    std::cin >> n;

    std::vector<std::pair<int, int>> petrolPump(n * 3);

    for (int i = n; i < (n * 2); i++)
    {
        std::cin >> petrolPump[i].petrol >> petrolPump[i].distance;

        petrolPump[i - n] = petrolPump[i];
        petrolPump[i + n] = petrolPump[i];
    }

    front = back = n;
    petrolCapacity = petrolPump[front].petrol;

    while ((back - front) < n)
    {
        if (petrolCapacity < petrolPump[back].distance)
        {
            petrolCapacity -= petrolPump[front].petrol;
            petrolCapacity += petrolPump[front].distance;
            front++;
        }
        else
        {
            petrolCapacity -= petrolPump[back].distance;
            back++;
            petrolCapacity += petrolPump[back].petrol;
        }
    }

    std::cout << front - n;

    return EXIT_SUCCESS;
}