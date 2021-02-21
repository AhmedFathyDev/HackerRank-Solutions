
int *compareTriplets(int a_count, int *a, int b_count, int *b, int *result_count)
{
    *result_count = 2;
    static int arr[2];
    int i;
    for (i = 0; i < 3; i++)
    {
        if (*(a + i) > *(b + i))
        {
            arr[0]++;
        }
        else if (*(b + i) > *(a + i))
        {
            arr[1]++;
        }
    }
    
    return arr;
}