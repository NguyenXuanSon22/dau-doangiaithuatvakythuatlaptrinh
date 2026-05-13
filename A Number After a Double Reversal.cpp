class Solution(object):
    def isSameAfterReversals(self, num):
        def reverse(n):
            return int(str(n)[::-1])
        
        reversed1 = reverse(num)
        reversed2 = reverse(reversed1)
        return reversed2 == num
        
