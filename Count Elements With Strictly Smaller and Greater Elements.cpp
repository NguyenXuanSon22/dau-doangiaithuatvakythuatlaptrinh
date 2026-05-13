class Solution(object):
    def countElements(self, nums):
        if not nums:
            return 0
        
        mn = min(nums)
        mx = max(nums)
        
        count = 0
        for x in nums:
            if mn < x < mx:
                count += 1
        
        return count
        
