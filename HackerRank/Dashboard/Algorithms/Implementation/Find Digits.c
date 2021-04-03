
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    short int t, ans;
    long int n, i;

    scanf("%hi", &t);

    while (t--)
    {
        ans = 0;
        scanf("%li", &n);

        i = n;
        while (i)
        {
            if ((i % 10) && n % (i % 10) == 0)
            {
                ans++;
            }

            i /= 10;
        }

        printf("%hi\n", ans);
    }

    return EXIT_SUCCESS;
}