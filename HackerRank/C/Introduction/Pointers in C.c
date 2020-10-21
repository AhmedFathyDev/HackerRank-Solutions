
#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    int c = *a - *b;
    *a = *a + *b;
    *b = c > c * -1 ? c : c * -1;
}

int main(void)
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d", a, b);

    return EXIT_SUCCESS;
}