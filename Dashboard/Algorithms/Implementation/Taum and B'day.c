
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)

int main(void)
{

    short int t;
    long int b, bc, w, wc, z;

    scanf("%hi", &t);

    while (t--)
    {
        scanf("%li %li %li %li %li", &b, &w, &bc, &wc, &z);
        printf("%li\n", b * MIN(bc, z + wc) + w * MIN(wc, z + bc));
    }

    return EXIT_SUCCESS;
}