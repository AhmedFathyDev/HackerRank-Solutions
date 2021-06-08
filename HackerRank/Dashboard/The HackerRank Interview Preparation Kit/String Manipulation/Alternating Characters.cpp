
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int q;

    std::cin >> q;

    while (q--)
    {
        std::string s;

        int ans = 0;
        
        std::cin >> s;

        for (size_t i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                ans++;
            }
        }

        std::cout << ans << "\n";
    }    

    return EXIT_SUCCESS;
}