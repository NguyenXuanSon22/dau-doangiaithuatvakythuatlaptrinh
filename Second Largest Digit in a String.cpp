class Solution(object):
    def secondHighest(self, s):
        digits = set()

        for ch in s:
            if ch.isdigit():
                digits.add(int(ch))
        if len(digits) < 2:
            return -1
        digits.remove(max(digits))
        return max(digits)

sol = Solution()
print(sol.secondHighest("dfa12321afd")) 
print(sol.secondHighest("abc1111"))
        
