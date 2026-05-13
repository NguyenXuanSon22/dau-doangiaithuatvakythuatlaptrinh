class Solution(object):
    def countHillValley(self, nums):
        compressed = [nums[0]]
        for n in nums[1:]:
            if n != compressed[-1]:
                compressed.append(n)
        
        count = 0
        for i in range(1, len(compressed) - 1):
            if compressed[i] > compressed[i-1] and compressed[i] > compressed[i+1]:
                count += 1  
            elif compressed[i] < compressed[i-1] and compressed[i] < compressed[i+1]:
                count += 1  
        
        return count
        
