
int lexicographic_sort(const char *a, const char *b)
{
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char *a, const char *b)
{
    return strcmp(b, a);
}

int characters_count(const char *s)
{
    int count, dif[26], i;

    memset(dif, 0, 26 * sizeof(int));

    for (i = 0, count = 0; i < strlen(s); i++)
    {
        if (!dif[s[i] - 'a'])
        {
            dif[s[i] - 'a']++, count++;
        }
    }

    return count;
}
int sort_by_number_of_distinct_characters(const char *a, const char *b)
{
    return characters_count(a) - characters_count(b) ? characters_count(a) - characters_count(b) : lexicographic_sort(a, b);
}

int sort_by_length(const char *a, const char *b)
{
    return strlen(a) - strlen(b) ? strlen(a) - strlen(b) : lexicographic_sort(a, b);
}

void string_sort(char **arr, const int len,
                 int (*cmp_func)(const char *a, const char *b))
{

    int i, j;

    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (cmp_func(arr[i], arr[j]) > 0)
            {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return;
}