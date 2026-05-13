class Solution(object):
    def distributeCandies(self, candyType):
        unique_candies = len(set(candyType)) 
        return min(unique_candies, len(candyType) // 2)
        
