class Solution(object):
    def minimumCost(self, cost):
        cost.sort(reverse=True)
        total = 0

        for i in range(len(cost)):
            if i % 3 != 2:
                total += cost[i]

        return total
sol = Solution()
print(sol.minimumCost([1,2,3]))             
print(sol.minimumCost([6,5,7,9,2,2]))        
print(sol.minimumCost([5,5]))       
        
