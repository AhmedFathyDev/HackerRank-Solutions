
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, sum = 0;

    scanf("%d", &n);

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("%i", sum);

    return EXIT_SUCCESS;
}