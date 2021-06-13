
class Solution(object):
    def removeDuplicates(self, nums):
        if len(nums) < 2:
            return len(nums)

        pre = 0
        for cur in range(0, len(nums)):
            if nums[pre] != nums[cur]:
                pre += 1
                nums[pre] = nums[cur]

        return pre + 1
