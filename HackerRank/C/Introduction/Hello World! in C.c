
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[100];
    
    scanf("%[^\n]%*c", s);
    printf("Hello, World!\n%s", s);

    return EXIT_SUCCESS;
}