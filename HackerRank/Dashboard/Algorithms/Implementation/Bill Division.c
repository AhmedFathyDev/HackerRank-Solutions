
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, k, i, sum, b;
    scanf("%i %i", &n, &k);

    short int *bill = malloc(n * sizeof(short int));

    sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%hi", (bill + i));
        sum += *(bill + i);
    }

    scanf("%i", &b);

    sum -= bill[k];

    if (b > sum / 2)
    {
        printf("%i", b - sum / 2);
    }
    else
    {
        printf("Bon Appetit");
    }

    return EXIT_SUCCESS;
}