class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        result = 0
        while n >= 5:
            result += n / 5
            n /= 5
        return result
