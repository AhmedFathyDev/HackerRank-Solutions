
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        switch (i)
        {
        case 1:
            puts("one");
            break;
        case 2:
            puts("two");
            break;
        case 3:
            puts("three");
            break;
        case 4:
            puts("four");
            break;
        case 5:
            puts("five");
            break;
        case 6:
            puts("six");
            break;
        case 7:
            puts("seven");
            break;
        case 8:
            puts("eight");
            break;
        case 9:
            puts("nine");
            break;
        default:
            i & 1 ? puts("odd") : puts("even");
        }
    }

    return EXIT_SUCCESS;
}