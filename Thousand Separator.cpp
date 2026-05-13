class Solution(object):
    def thousandSeparator(self, n):
        s = str(n)
        s = s[::-1]
        parts = []

        for i in range(0, len(s), 3):
            parts.append(s[i:i+3])

        return ".".join(parts)[::-1]

sol = Solution()
print(sol.thousandSeparator(987))    
print(sol.thousandSeparator(1234))   
print(sol.thousandSeparator(123456789))  
        
