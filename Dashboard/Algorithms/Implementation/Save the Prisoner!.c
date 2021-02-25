
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    long int t, n, m, s;
    scanf("%li", &t);

    while (t--)
    {
        scanf("%li %li %li", &n, &m, &s);
        printf("%li\n", (m + s - 1) % n == 0 ? n : (m + s - 1) % n);
    }

    return EXIT_SUCCESS;
}