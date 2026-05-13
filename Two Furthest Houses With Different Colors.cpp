class Solution(object):
    def maxDistance(self, colors):
        n = len(colors)
        left = 0
        while colors[left] == colors[-1]:
            left += 1
        right = n - 1
        while colors[right] == colors[0]:
            right -= 1
        
        return max(right, n - 1 - left)
sol = Solution()
print(sol.maxDistance([1,1,1,6,1,1,1]))  
print(sol.maxDistance([1,8,3,8,3]))      
print(sol.maxDistance([0,1]))      
        
