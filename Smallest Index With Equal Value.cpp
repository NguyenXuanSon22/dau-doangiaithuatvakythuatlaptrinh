class Solution(object):
    def smallestEqual(self, nums):
        for i, val in enumerate(nums):
            if i % 10 == val:
                return i
        return -1

sol = Solution()
print(sol.smallestEqual([0,1,2]))                
print(sol.smallestEqual([4,3,2,1]))               
print(sol.smallestEqual([1,2,3,4,5,6,7,8,9,0]))   
        
