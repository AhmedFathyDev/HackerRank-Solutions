
function modifyArray(nums) {

    for (let i in nums) {
        if (nums[i] & 1) {
            nums[i] *= 3;
        }
        else {
            nums[i] *= 2;
        }
    }

    return nums;
}