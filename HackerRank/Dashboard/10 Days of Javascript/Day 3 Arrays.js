
function getSecondLargest(nums) {

    nums = Array.from(new Set(nums)).sort(function (a, b) { return b - a });

    return nums[1];
}