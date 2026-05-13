class Solution(object):
    def sumOfUnique(self, nums):
        freq = Counter(nums)
        total = 0

        for num, count in freq.items():
            if count == 1:
                total += num

        return total

sol = Solution()
print(sol.sumOfUnique([1,2,3,2]))       
print(sol.sumOfUnique([1,1,1,1,1]))    
print(sol.sumOfUnique([1,2,3,4,5]))     
        
