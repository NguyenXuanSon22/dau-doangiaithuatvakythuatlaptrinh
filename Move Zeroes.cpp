class Solution(object):
    def moveZeroes(self, nums):
        last_non_zero = 0  
        for num in nums:
            if num != 0:
                nums[last_non_zero] = num
                last_non_zero += 1
        for i in range(last_non_zero, len(nums)):
            nums[i] = 0
        
