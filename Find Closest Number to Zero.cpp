class Solution(object):
    def findClosestNumber(self, nums):
        return min(nums, key=lambda x: (abs(x), -x))
        
