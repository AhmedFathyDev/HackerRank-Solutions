
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)

int main(void)
{
    int n, p;
    scanf("%i %i", &n, &p);

    printf("%i", MIN(p / 2, n / 2 - p / 2));

    return EXIT_SUCCESS;
}