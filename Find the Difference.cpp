class Solution(object):
    def findTheDifference(self, s, t):
        count_s = Counter(s)
        count_t = Counter(t)
        
        for char in count_t:
            if count_t[char] != count_s.get(char, 0):
                return char
            
