
vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    vector<int> res(queries.size(), 0);
    for (size_t i = 0; i < queries.size(); i++)
    {
        for (size_t j = 0; j < strings.size(); j++)
        {
            if (queries[i] == strings[j])
            {
                res[i]++;
            }
        }
    }
    return res;
}