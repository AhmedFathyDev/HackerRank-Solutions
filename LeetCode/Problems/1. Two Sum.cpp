
//  Time Complexity: O(n)
//  Space Complexity: O(n)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hash;
        int nums_size = nums.size();

        for (int i = 0; i < nums_size; i++)
        {
            if (hash.find(target - nums[i]) != hash.end())
            {
                return {hash[target - nums[i]], i};
            }

            hash[nums[i]] = i;
        }
        return {};
    }
};