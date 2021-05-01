
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, m;

    std::string numbers[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"};

    std::string str = "past";

    scanf("%i %i", &h, &m);

    if (!m)
    {
        printf("%s o' clock", numbers[h].c_str());
        return EXIT_SUCCESS;
    }

    if (m > 30)
    {
        m = 60 - m;
        h++;
        h %= 13;
        str = "to";
    }

    switch (m)
    {
    case 1:
        printf("one minute %s ", str.c_str());
        break;
    case 15:
        printf("quarter %s ", str.c_str());
        break;
    case 30:
        printf("half past ");
        break;
    default:
        printf("%s minutes %s ", numbers[m].c_str(), str.c_str());
    }

    printf("%s", numbers[h].c_str());

    return EXIT_SUCCESS;
}