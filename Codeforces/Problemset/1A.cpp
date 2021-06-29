
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, m, a;
    
	std::cin >> n >> m >> a;
	
	long long N = (n + a - 1) / a, M = (m + a - 1) / a;
	
	std::cout << N * M;

    return EXIT_SUCCESS;
}