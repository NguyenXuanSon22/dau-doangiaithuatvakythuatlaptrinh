class Solution(object):
    def targetIndices(self, nums, target):
        nums.sort()
        result = []

        for i, val in enumerate(nums):
            if val == target:
                result.append(i)

        return result
sol = Solution()
print(sol.targetIndices([1,2,5,2,3], 2))  
print(sol.targetIndices([1,2,5,2,3], 3))  
print(sol.targetIndices([1,2,5,2,3], 5)) 
        
