
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch, s[100], sen[100];
    
    scanf("%c %s %[^\n]%*c", &ch, s, sen);
    printf("%c\n%s\n%s", ch, s, sen);

    return EXIT_SUCCESS;
}