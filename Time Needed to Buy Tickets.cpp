class Solution(object):
    def timeRequiredToBuy(self, tickets, k):
        time = 0

        for i, t in enumerate(tickets):
            if i <= k:
                time += min(t, tickets[k])
            else:
                time += min(t, tickets[k] - 1)

        return time

sol = Solution()
print(sol.timeRequiredToBuy([2,3,2], 2))     
print(sol.timeRequiredToBuy([5,1,1,1], 0))  
        
