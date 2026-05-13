class Solution(object):
    def replaceDigits(self, s):
        s = list(s)

        for i in range(1, len(s), 2):
            shift = int(s[i])
            s[i] = chr(ord(s[i - 1]) + shift)

        return "".join(s)

sol = Solution()
print(sol.replaceDigits("a1c1e1"))      
print(sol.replaceDigits("a1b2c3d4e"))
        
