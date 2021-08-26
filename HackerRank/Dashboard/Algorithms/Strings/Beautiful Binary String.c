
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, steps = 0;

    scanf("%i", &n);

    char *b = malloc(n * sizeof(char));

    scanf("%s", b);

    for (size_t i = 0; i < n - 2; ++i)
    {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0')
        {
            steps++;
            i += 2;
        }
    }

    printf("%i", steps);

    return EXIT_SUCCESS;
}