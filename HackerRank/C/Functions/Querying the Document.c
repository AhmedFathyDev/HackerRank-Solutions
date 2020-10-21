
char *kth_word_in_mth_sentence_of_nth_paragraph(char ****document, int k, int m, int n)
{
    return document[n - 1][m - 1][k - 1];
}

char **kth_sentence_in_mth_paragraph(char ****document, int k, int m)
{
    return document[m - 1][k - 1];
}

char ***kth_paragraph(char ****document, int k)
{
    return document[k - 1];
}

char **split_string(char *text, char delim)
{
    assert(text != NULL);

    char **result = malloc(1 * sizeof(char *));
    int size = 1;

    char *temp = strtok(text, &delim);
    *result = temp;

    while (temp != NULL)
    {
        size++;
        result = realloc(result, size * sizeof(char *));
        temp = strtok(NULL, &delim);
        result[size - 1] = temp;
    }

    return result;
}

char ****get_document(char *text)
{
    assert(text != NULL);

    char **paragraphs = split_string(text, '\n');
    int npar = 0;

    while (paragraphs[npar] != NULL)
    {
        npar++;
    }

    char ****document = malloc((npar + 1) * sizeof(char ***));
    document[npar] = NULL;

    int i = 0;
    while (paragraphs[i] != NULL)
    {

        char **sentences = split_string(paragraphs[i], '.');
        int nsen = 0;
        while (sentences[nsen] != NULL)
        {
            nsen++;
        }

        document[i] = malloc((nsen + 1) * sizeof(char **));
        document[i][nsen] = NULL;

        int j = 0;
        while (sentences[j] != NULL)
        {
            document[i][j] = split_string(sentences[j], ' ');
            j++;
        }
        i++;
    }

    return document;
}