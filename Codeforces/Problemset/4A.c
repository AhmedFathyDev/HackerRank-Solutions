
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int w;

    scanf("%i", &w);

    printf(!(w & 1) && w > 2 ? "YES" : "NO");

    return EXIT_SUCCESS;
}