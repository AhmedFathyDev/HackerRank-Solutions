
class Solution(object):
    def removeElement(self, nums, val):
        i = 0
        for j in range(0, len(nums)):
            if nums[j] != val:
                nums[i] = nums[j]
                i += 1

        return i
