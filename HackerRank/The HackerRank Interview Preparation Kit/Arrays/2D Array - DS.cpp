
int hourglassSum(vector<vector<int>> arr)
{
    int mx = INT_MIN;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            mx = max(mx, arr[i][j] + arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
        }
    }
    return mx;
}