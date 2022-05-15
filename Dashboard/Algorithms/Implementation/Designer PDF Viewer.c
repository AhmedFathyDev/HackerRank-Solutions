
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(X, Y) (X > Y ? X : Y)

int main(void)
{
    int i, mx, h[26];
    char word[10];
    for (i = 0; i < 26; i++)
    {
        scanf("%i ", (h + i));
    }

    scanf("%s", word);

    mx = 0;
    for (i = 0; i < strlen(word); i++)
    {
        mx = MAX(mx, h[word[i] - 97]);
    }

    printf("%li", strlen(word) * mx);

    return EXIT_SUCCESS;
}