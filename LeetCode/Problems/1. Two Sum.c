
//  Time Complexity: O(n * n)
//  Space Complexity: O(1)

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    int *answer = malloc(2 * sizeof(int));

    for (size_t i = 0; i < numsSize; ++i)
    {
        for (size_t j = i + 1; j < numsSize; ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                answer[0] = i;
                answer[1] = j;
                return answer;
            }
        }
    }

    return NULL;
}