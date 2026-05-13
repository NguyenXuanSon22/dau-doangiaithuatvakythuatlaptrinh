class Solution(object):
    def canAliceWin(self, nums):
        single_sum = 0
        double_sum = 0
        
        for num in nums:
            if 1 <= num <= 9:
                single_sum += num
            else:
                double_sum += num
        
        total = single_sum + double_sum
        return single_sum > total - single_sum or double_sum > total - double_sum
