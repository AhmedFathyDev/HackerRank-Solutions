
long aVeryBigSum(int ar_count, long *ar)
{
    int i;
    long sum;
    sum = 0;
    for (i = 0; i < ar_count; i++)
    {
        sum += *(ar + i);
    }
    
    return sum;
}