
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i1, i2;
    float f1, f2;
    
    scanf("%i %i", &i1, &i2);
    scanf("%f %f", &f1, &f2);
    printf("%i %i\n", i1 + i2, i1 - i2);
    printf("%.1f %.1f", f1 + f2, f1 - f2);

    return EXIT_SUCCESS;
}