class Solution(object):
    def checkString(self, s):
        seen_b = False

        for ch in s:
            if ch == 'b':
                seen_b = True
            elif seen_b and ch == 'a':
                return False

        return True

sol = Solution()
print(sol.checkString("aaabbb"))  
print(sol.checkString("abab"))    
print(sol.checkString("bbb"))  
        
