
int birthdayCakeCandles(int ar_count, int *ar)
{
    int mx = 0, ans = 0;
    for (int i = 0; i < ar_count; i++)
    {
        if (*(ar + i) > mx)
        {
            mx = *(ar + i);
        }
    }

    for (int i = 0; i < ar_count; i++)
    {
        if (mx == *(ar + i))
        {
            ans++;
        }
    }
    
    return ans;
}