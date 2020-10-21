
int main(void)
{
    char input_string[105];

    scanf("%[^\n]%*c", input_string);

    printf("Hello, World.\n");

    printf("%s", input_string);

    return EXIT_SUCCESS;
}