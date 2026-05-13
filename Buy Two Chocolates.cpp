class Solution(object):
    def buyChoco(self, prices, money):
        n = len(prices)
        min_cost = float('inf')

        for i in range(n):
            for j in range(i + 1, n):
                total_cost = prices[i] + prices[j]
                if total_cost <= money:
                    min_cost = min(min_cost, total_cost)

        if min_cost == float('inf'):
            return money  
        return money - min_cost
