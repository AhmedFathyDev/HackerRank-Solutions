
vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<vector<int>> seqList(n);
    int lastAnswer = 0;
    vector<int> result;
    for (size_t i = 0; i < queries.size(); i++)
    {
        if (queries[i][0] == 1)
        {
            seqList[(lastAnswer ^ queries[i][1]) % n].push_back(queries[i][2]);
        }
        else
        {
            lastAnswer = seqList[(lastAnswer ^ queries[i][1]) % n][queries[i][2] % seqList[(lastAnswer ^ queries[i][1]) % n].size()];
            result.push_back(lastAnswer);
        }
    }
    return result;
}