class Solution(object):
    def reformatNumber(self, number):
        digits = [c for c in number if c.isdigit()]
        
        res = []
        i = 0
        n = len(digits)
        while n - i > 4:
            res.append("".join(digits[i:i+3]))
            i += 3
        remaining = n - i
        if remaining == 4:
            res.append("".join(digits[i:i+2]))
            res.append("".join(digits[i+2:i+4]))
        else:
            res.append("".join(digits[i:]))
        return "-".join(res)

sol = Solution()
print(sol.reformatNumber("1-23-45 6"))    
print(sol.reformatNumber("123 4-567"))    
print(sol.reformatNumber("123 4-5678"))    
        
