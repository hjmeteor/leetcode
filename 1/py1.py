class Solution(object):
    def twoSum(self, nums, target):
        results = {}
        lenn = len(nums)
        for i in range(lenn):
            results[target - nums[i]] = i
        for i in range(lenn):
            if nums[i] in results:
                if i != results[nums[i]]:
                	return [results[nums[i]], i]
