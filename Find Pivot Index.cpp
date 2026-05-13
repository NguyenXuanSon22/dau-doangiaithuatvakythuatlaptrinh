class Solution(object):
    def pivotIndex(self, nums):
        total_sum = sum(nums)
        left_sum = 0
        
        for i, num in enumerate(nums):
            if 2 * left_sum + num == total_sum:
                return i
            left_sum += num
        
        return -1
            
