class Solution(object):
    def pivotInteger(self, n):
        total = n * (n + 1) // 2
        x = int(math.sqrt(total))
        if x * x == total:
            return x
        return -1
        
