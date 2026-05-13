class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        total = 0
        empty = 0

        while numBottles > 0:
            total += numBottles
            empty += numBottles

            numBottles = empty // numExchange
            empty = empty % numExchange

        return total

sol = Solution()
print(sol.numWaterBottles(9, 3))   
print(sol.numWaterBottles(15, 4))  
        
