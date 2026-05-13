class Solution(object):
    def sumZero(self, n):
        result = []
        for i in range(1, n):
            result.append(i)
        result.append(-(n * (n - 1) // 2))     
        return result
        
