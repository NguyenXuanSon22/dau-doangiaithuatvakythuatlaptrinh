class Solution(object):
    def countBalls(self, lowLimit, highLimit):
        box = defaultdict(int)

        def digit_sum(x):
            s = 0
            while x > 0:
                s += x % 10
                x //= 10
            return s

        max_count = 0

        for ball in range(lowLimit, highLimit + 1):
            b = digit_sum(ball)
            box[b] += 1
            max_count = max(max_count, box[b])

        return max_count
sol = Solution()
print(sol.countBalls(1, 10))   
print(sol.countBalls(5, 15))   
print(sol.countBalls(19, 28))  
        
