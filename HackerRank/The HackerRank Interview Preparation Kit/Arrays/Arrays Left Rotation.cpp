
vector<int> rotLeft(vector<int> arr, int d)
{
    vector<int> ans(arr.size());
    d %= arr.size();
    for (int i = d, j = 0; j < arr.size(); i %= arr.size())
    {
        ans[j++] = arr[i++];
    }
    return ans;
}