
void plusMinus(int arr_count, int *arr)
{
    int i;
    float p, n, z;
    p = 0, n = 0, z = 0;
    for (i = 0; i < arr_count; i++)
    {
        if (*(arr + i) > 0)
        {
            p++;
        }
        else if (*(arr + i) < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    
    printf("%f\n%f\n%f", p / arr_count, n / arr_count, z / arr_count);
}