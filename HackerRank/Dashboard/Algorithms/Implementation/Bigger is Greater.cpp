
#include <iostream>
#include <algorithm>

int main(void)
{
    int t;
    scanf("%i", &t);

    while (t--)
    {
        std::string w;

        std::cin >> w;

        if (next_permutation(w.begin(), w.end()))
        {
            printf("%s\n", w.c_str());
        }
        else
        {
            printf("no answer\n");
        }
    }
    return EXIT_SUCCESS;
}