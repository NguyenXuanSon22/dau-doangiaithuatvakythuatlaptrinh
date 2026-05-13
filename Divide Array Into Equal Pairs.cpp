class Solution(object):
    def divideArray(self, nums):
        counts = Counter(nums)
        for count in counts.values():
            if count % 2 != 0:
                return False
        
        return True
        
