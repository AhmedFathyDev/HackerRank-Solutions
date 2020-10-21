
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short int n;

    scanf("%hi", &n);
    
    if (n & 1)
    {
        printf("Weird");
    }
    else if (n < 6)
    {
        printf("Not Weird");
    }
    else if (n < 21)
    {
        printf("Weird");
    }
    else
    {
        printf("Not Weird");
    }

    return EXIT_SUCCESS;
}