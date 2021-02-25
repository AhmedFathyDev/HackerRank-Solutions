
#include <stdio.h>
#include <stdlib.h>

#define MIN(X, Y) (X < Y ? X : Y)

int main(void)
{

    int n, *arr, i, ans, mn, mi, cont;

    scanf("%i", &n);

    arr = malloc(n * sizeof(int)), mn = 1000, ans = n;

    for (i = 0; i < n; i++)
    {
        scanf("%i", (arr + i));

        mn = MIN(mn, arr[i]);
    }

    do
    {
        cont = 0, mi = mn, mn = 1000;

        for (i = 0; i < n; i++)
        {
            if (arr[i])
            {
                arr[i] -= mi;
            }

            if (arr[i])
            {
                cont++, mn = MIN(mn, arr[i]);
            }
        }

        printf("%i\n", ans);
        ans = cont;

    } while (cont);

    return EXIT_SUCCESS;
}