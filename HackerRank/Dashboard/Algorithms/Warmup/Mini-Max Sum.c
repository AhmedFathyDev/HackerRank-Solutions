
void miniMaxSum(int arr_count, int *arr)
{
    long int i, max, min, sum;
    max = 0, min = 1e9 + 1, sum = 0;
    for (i = 0; i < arr_count; i++)
    {
        max = *(arr + i) > max ? *(arr + i) : max;
        min = *(arr + i) < min ? *(arr + i) : min;
        sum += *(arr + i);
    }
    
    printf("%li %li", sum - max, sum - min);
}