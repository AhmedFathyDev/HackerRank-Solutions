
Difference(vector<int> arrayElements) : elements(arrayElements)
{
    maximumDifference = INT32_MIN;
}

void computeDifference(void)
{
    for (size_t i = 0; i < elements.size(); i++)
    {
        for (size_t j = i + 1; j < elements.size(); j++)
        {
            maximumDifference = max(maximumDifference, abs(elements[i] - elements[j]));
        }
    }
}