
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[101];
    long int n, as, ans;
    short int i;

    scanf("%s %li", str, &n);

    for (i = 0, as = 0, ans = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            as++;
            if (i < n % strlen(str))
            {
                ans++;
            }
        }
    }

    printf("%li", as * (n / strlen(str)) + ans);

    return EXIT_SUCCESS;
}