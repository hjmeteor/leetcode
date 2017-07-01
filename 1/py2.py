class Solution(object):
    def twoSum(self, nums, target):
        results = {}
        lenn = len(nums)
        for i in range(lenn):
            if nums[i] in results:
                return [results[nums[i]], i]
            else:
                results[target - nums[i]] = i
