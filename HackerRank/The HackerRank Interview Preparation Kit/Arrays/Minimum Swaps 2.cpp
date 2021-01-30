
int minimumSwaps(vector<int> arr)
{
    int minimum_swaps = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == i + 1)
        {
            continue;
        }
        swap(arr[i], arr[arr[i] - 1]);
        i--;
        minimum_swaps++;
    }
    return minimum_swaps;
}