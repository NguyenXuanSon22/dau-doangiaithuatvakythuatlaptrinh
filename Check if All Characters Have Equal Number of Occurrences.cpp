class Solution(object):
    def areOccurrencesEqual(self, s):
        freq = Counter(s)

        values = list(freq.values())
        return all(v == values[0] for v in values)
sol = Solution()
print(sol.areOccurrencesEqual("abacbc"))  
print(sol.areOccurrencesEqual("aaabb"))
        
