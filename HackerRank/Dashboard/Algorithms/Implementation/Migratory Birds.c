
#include <stdio.h>
#include <stdlib.h>

int arr[6];

int main(void)
{
    int n, i, x, ans, max;

    scanf("%i", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%i", &x);
        arr[x]++;
    }

    ans = arr[0], max = 0;

    for (i = 0; i <= 5; i++)
    {
        if (arr[i] > max)
        {
            ans = i;
            max = arr[i];
        }
    }

    printf("%i", ans);

    return EXIT_SUCCESS;
}