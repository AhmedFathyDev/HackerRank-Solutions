
int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int i, j, primary, secondary;
    primary = 0, secondary = 0;
    for (i = 0; i < arr_rows; i++)
    {
        for (j = 0; j < arr_columns; j++)
        {
            if (i == j)
            {
                primary += *(*(arr + i) + j);
                //printf("%i ", *(*(arr + i) + j));
            }

            if (i == (arr_columns - (j + 1)))
            {
                secondary += *(*(arr + i) + j);
                //printf("%i ", *(*(arr + i) + j));
            }
        }
    }
    
    return abs(primary - secondary);
}