class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        start = -1
        result = 0
        dict = {}
        for i in range(len(s)):
            if s[i] in dict and dict[s[i]] > start:
                start = dict[s[i]]
            dict[s[i]] = i
            result = max(result, i - start)
        return result
