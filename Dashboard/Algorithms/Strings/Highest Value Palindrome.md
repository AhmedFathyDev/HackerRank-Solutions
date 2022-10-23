
# Highest Value Palindrome
### [Back ⬅️](README.md)

## **C** solution

```c
#include <stdio.h>
#include <stdlib.h>

#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

int main(void)
{
    int n, k;

    scanf("%i %i", &n, &k);

    char *number = malloc(n * sizeof(char));
    char *changed_digit = malloc(n * sizeof(char));

    scanf("%s", number);

    for (size_t i = 0; i < n; ++i)
    {
        changed_digit[i] = 'n';
    }

    for (size_t i = 0; i < n / 2; ++i)
    {
        if (number[i] != number[n - i - 1])
        {
            number[i] = MAX(number[i], number[n - i - 1]);
            number[n - i - 1] = number[i];

            changed_digit[i] = 'y';
            k--;
        }
    }

    if (k < 0)
    {
        printf("-1");
        return EXIT_SUCCESS;
    }

    for (size_t i = 0; i < n / 2 + 1 && k; ++i)
    {
        if (number[i] != '9' && i == n / 2)
        {
            k--;
            number[i] = '9';
        }
        else if (number[i] != '9' && changed_digit[i] == 'y')
        {
            k--;
            number[i] = '9';
            number[n - i - 1] = '9';
        }
        else if (number[i] != '9' && changed_digit[i] == 'n' && k > 1)
        {
            k -= 2;
            number[i] = '9';
            number[n - i - 1] = '9';
        }
    }

    printf("%s", number);

    return EXIT_SUCCESS;
}
```